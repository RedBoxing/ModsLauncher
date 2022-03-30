#include "Il2Cpp.h"
// =========================================================================== //
string gameLibName = "libil2cpp.so";
uintptr_t lib_addr = 0;
// =========================================================================== //
Il2CppString *(*il2cpp_string_new)(const char *);
Il2CppString *(*il2cpp_string_new_utf16)(const wchar_t *, int32_t);
// =========================================================================== //
void Il2CppAttach(const char *libname)
{
    gameLibName = libname;

    void *h = dlopen(libname, 4);
    while(!h)
    {
        h = dlopen(libname, 4);
    }

    il2cpp_string_new = (Il2CppString *(*)(const char *))(dlsym(h, "il2cpp_string_new"));
    il2cpp_string_new_utf16 = (Il2CppString *(*)(const wchar_t *, int32_t))(dlsym(h, "il2cpp_string_new_utf16"));
}
// =========================================================================== //
uintptr_t Il2CppBase() {
    if (lib_addr) {
        return lib_addr;
    }

    char line[512];

    FILE *f = fopen("/proc/self/maps", "r");

    if (!f)
        return 0;

    while (fgets(line, sizeof line, f)) {
        uintptr_t base;
        char tmp[64];
        if (sscanf(line, "%" PRIXPTR "-%*" PRIXPTR " %*s %*s %*s %*s %s", &base, tmp) > 0) {
            if (strstr(tmp, gameLibName.c_str())) {
                fclose(f);
                lib_addr = base;
                return base;
            }
        }
    }
    fclose(f);
    return 0;
}
// =========================================================================== //
typedef unsigned short UTF16;
typedef wchar_t UTF32;
typedef char UTF8;

int is_surrogate(UTF16 uc) {
    return (uc - 0xd800u) < 2048u;
}

int is_high_surrogate(UTF16 uc) {
    return (uc & 0xfffffc00) == 0xd800;
}

int is_low_surrogate(UTF16 uc) {
    return (uc & 0xfffffc00) == 0xdc00;
}

UTF32 surrogate_to_utf32(UTF16 high, UTF16 low) {
    return (high << 10) + low - 0x35fdc00;
}

const char* utf16_to_utf8(const UTF16* source, size_t len) {
    std::u16string s(source, source + len);
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> convert;
    return convert.to_bytes(s).c_str();
}

const wchar_t* utf16_to_utf32(const UTF16* source, size_t len) {
    UTF32* output = new UTF32[len + 1];

    for (int i = 0; i < len; i++) {
        const UTF16 uc = source[i];
        if (!is_surrogate(uc)) {
            output[i] = uc;
        }
        else {
            if (is_high_surrogate(uc) && is_low_surrogate(source[i]))
                output[i] = surrogate_to_utf32(uc, source[i]);
            else
                output[i] = L'?';
        }
    }

    output[len] = L'\0';
    return output;
}
// =========================================================================== //
const char* Il2CppString::CString() {
    return utf16_to_utf8(&this->start_char, this->length);
}

const wchar_t* Il2CppString::WCString() {
    return utf16_to_utf32(&this->start_char, this->length);
}

Il2CppString *Il2CppString::Create(const char *s)
{
    return il2cpp_string_new(s);
}

Il2CppString *Il2CppString::Create(const wchar_t *s, int len)
{
    return il2cpp_string_new_utf16(s, len);
}
// =========================================================================== //