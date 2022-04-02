#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CreateBulletOnBulletDestroy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateBulletOnBulletDestroy"));
	}

	template <typename T = uintptr_t> T& emitType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& scatterCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& scatterInitAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& scatterFixedInitAngle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& scatterRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bulletConfig() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& canRotate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _trigger() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_isScatter() {
		return ((T (*)(CreateBulletOnBulletDestroy*))(Il2CppBase() + 0x427C72C))(this);
	}
	template <typename T = bool> T get_isScatterFixedInitAngle() {
		return ((T (*)(CreateBulletOnBulletDestroy*))(Il2CppBase() + 0x427C794))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CreateBulletOnBulletDestroy*))(Il2CppBase() + 0x427C810))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(CreateBulletOnBulletDestroy*))(Il2CppBase() + 0x427C904))(this);
	}
	template <typename T = void> T NormalType() {
		return ((T (*)(CreateBulletOnBulletDestroy*))(Il2CppBase() + 0x427C990))(this);
	}
	template <typename T = void> T ScatterType() {
		return ((T (*)(CreateBulletOnBulletDestroy*))(Il2CppBase() + 0x427CF3C))(this);
	}
	template <typename T = void> T Awakeb__14_0(uintptr_t other) {
		return ((T (*)(CreateBulletOnBulletDestroy*, uintptr_t))(Il2CppBase() + 0x427D790))(this, other);
	}

};

}
