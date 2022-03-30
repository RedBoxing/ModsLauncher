#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class StreamedWWWForm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "StreamedWWWForm"));
	}

	template <typename T = Il2CppString*> T& boundary() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& stream() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_headers() {
		return ((T (*)(StreamedWWWForm*))(Il2CppBase() + 0x1A2A40C))(this);
	}
	template <typename T = void> T AddField(Il2CppString* fieldName, Il2CppString* fieldValue) {
		return ((T (*)(StreamedWWWForm*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A30150))(this, fieldName, fieldValue);
	}
	template <typename T = void> T AddBinaryData(Il2CppString* fieldName, Il2CppArray<uintptr_t>* contents, Il2CppString* mimeType) {
		return ((T (*)(StreamedWWWForm*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x1A3026C))(this, fieldName, contents, mimeType);
	}
	template <typename T = void> T AddBinaryData_1(Il2CppString* fieldName, uintptr_t contents, Il2CppString* mimeType) {
		return ((T (*)(StreamedWWWForm*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A30390))(this, fieldName, contents, mimeType);
	}
	template <typename T = void> T AddFile(Il2CppString* fieldName, Il2CppString* path, Il2CppString* mimeType) {
		return ((T (*)(StreamedWWWForm*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A30494))(this, fieldName, path, mimeType);
	}

};

}
