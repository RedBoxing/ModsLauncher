#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopGeneralInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopGeneralInfo"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& masterSkinIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cellerSprites() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x440F050))(0);
	}

};

}
