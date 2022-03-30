#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletModifyProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletModifyProcessor"));
	}

	template <typename T = uintptr_t> T& bulletModify() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& hasEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init(uintptr_t bulletModify, uintptr_t weapon) {
		return ((T (*)(BulletModifyProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4625B40))(this, bulletModify, weapon);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BulletModifyProcessor*))(Il2CppBase() + 0x4625ED8))(this);
	}
	template <typename T = void> T OnBulletCreate(uintptr_t bullet) {
		return ((T (*)(BulletModifyProcessor*, uintptr_t))(Il2CppBase() + 0x4626098))(this, bullet);
	}
	template <typename T = void> T OnDelayedBulletRelease(uintptr_t bullet) {
		return ((T (*)(BulletModifyProcessor*, uintptr_t))(Il2CppBase() + 0x462615C))(this, bullet);
	}

};

}
