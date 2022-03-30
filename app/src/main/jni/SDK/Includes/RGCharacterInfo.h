#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGCharacterInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGCharacterInfo"));
	}

	template <typename T = Il2CppString*> T& char_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& unlock() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& unlock_gem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& skillCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skin_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
