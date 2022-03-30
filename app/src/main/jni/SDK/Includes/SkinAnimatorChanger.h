#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinAnimatorChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinAnimatorChanger"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& animatorControllers() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& defaultAnimatorController() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Change(int32_t skinIndex) {
		return ((T (*)(SkinAnimatorChanger*, int32_t))(Il2CppBase() + 0x18334BC))(this, skinIndex);
	}

};

}
