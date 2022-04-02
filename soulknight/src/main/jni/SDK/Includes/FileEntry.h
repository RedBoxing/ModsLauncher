#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FileEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FileEntry"));
	}

	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& md5() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_path() {
		return ((T (*)(FileEntry*))(Il2CppBase() + 0x4478104))(this);
	}
	template <typename T = void> T set_path(Il2CppString* value) {
		return ((T (*)(FileEntry*, Il2CppString*))(Il2CppBase() + 0x4479104))(this, value);
	}
	template <typename T = Il2CppString*> T get_md5() {
		return ((T (*)(FileEntry*))(Il2CppBase() + 0x44784D4))(this);
	}
	template <typename T = void> T set_md5(Il2CppString* value) {
		return ((T (*)(FileEntry*, Il2CppString*))(Il2CppBase() + 0x447910C))(this, value);
	}

};

}
