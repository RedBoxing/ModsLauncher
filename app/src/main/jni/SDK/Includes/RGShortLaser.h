#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGShortLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGShortLaser"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& end() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector2> T& direction() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& rigid2d() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& isReflect() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& lastHitCollider() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& _isHitOn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _enemyMask() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& repel() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& critic() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = bool> T get_hitOn() {
		return ((T (*)(RGShortLaser*))(Il2CppBase() + 0x43D5D04))(this);
	}
	template <typename T = void> T set_hitOn(bool value) {
		return ((T (*)(RGShortLaser*, bool))(Il2CppBase() + 0x43D5D64))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGShortLaser*))(Il2CppBase() + 0x43D5ECC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_enemyMask() {
		return ((T (*)(RGShortLaser*))(Il2CppBase() + 0x43D5FE4))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGShortLaser*))(Il2CppBase() + 0x43D61EC))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(RGShortLaser*, float))(Il2CppBase() + 0x43D6EB4))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(RGShortLaser*, float))(Il2CppBase() + 0x43D6F7C))(this, totalTime);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGShortLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43D7088))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T Resize(int32_t deltaSize) {
		return ((T (*)(RGShortLaser*, int32_t))(Il2CppBase() + 0x43D7320))(this, deltaSize);
	}
	template <typename T = void> T ReSetLenght(int32_t newLenght) {
		return ((T (*)(RGShortLaser*, int32_t))(Il2CppBase() + 0x43D74A0))(this, newLenght);
	}
	template <typename T = void> T FlushInfo() {
		return ((T (*)(RGShortLaser*))(Il2CppBase() + 0x43D7588))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGShortLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43D76B8))(this, P0, P1);
	}

};

}
