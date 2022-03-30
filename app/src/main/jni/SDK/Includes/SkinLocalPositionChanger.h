#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinLocalPositionChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinLocalPositionChanger"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppVector3>*> T& positions() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& defaultPosition() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& targetTransform() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Change(int32_t skinIndex) {
		return ((T (*)(SkinLocalPositionChanger*, int32_t))(Il2CppBase() + 0x1836CAC))(this, skinIndex);
	}

};

}
