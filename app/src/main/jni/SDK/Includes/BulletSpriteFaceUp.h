#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletSpriteFaceUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletSpriteFaceUp"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& faceUp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& minValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& maxValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T LateUpdate() {
		return ((T (*)(BulletSpriteFaceUp*))(Il2CppBase() + 0x2392B08))(this);
	}

};

}
