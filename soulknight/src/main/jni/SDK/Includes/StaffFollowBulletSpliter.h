#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StaffFollowBulletSpliter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StaffFollowBulletSpliter"));
	}

	template <typename T = float> T& scaleFactor() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& followGun() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& splitConfigGetter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bulletFollow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& addedCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& originDamageInfo() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(StaffFollowBulletSpliter*))(Il2CppBase() + 0x42993C4))(this);
	}
	template <typename T = void> T StartSplit(void* splitConfigGetter) {
		return ((T (*)(StaffFollowBulletSpliter*, void*))(Il2CppBase() + 0x429945C))(this, splitConfigGetter);
	}
	template <typename T = void> T EndSplit() {
		return ((T (*)(StaffFollowBulletSpliter*))(Il2CppBase() + 0x4299594))(this);
	}
	template <typename T = void> T OnFollowBulletCreate(uintptr_t bulletFollow) {
		return ((T (*)(StaffFollowBulletSpliter*, uintptr_t))(Il2CppBase() + 0x429984C))(this, bulletFollow);
	}
	template <typename T = void> T OnFollowBulletReset(uintptr_t bulletFollow) {
		return ((T (*)(StaffFollowBulletSpliter*, uintptr_t))(Il2CppBase() + 0x4299A34))(this, bulletFollow);
	}
	template <typename T = void> T DestroyExtraFollowBullet() {
		return ((T (*)(StaffFollowBulletSpliter*))(Il2CppBase() + 0x42996D0))(this);
	}

};

}
