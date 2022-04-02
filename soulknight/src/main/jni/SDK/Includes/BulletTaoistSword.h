#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletTaoistSword
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletTaoistSword"));
	}

	template <typename T = int32_t> T& dirSign() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppVector2> T& centerPoint() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = float> T& surroundRadius() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& trail() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = float> T get_radians() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF0AF0))(this);
	}
	template <typename T = float> T get_fixedAngle() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF0B5C))(this);
	}
	template <typename T = uintptr_t> T get_source() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF0C6C))(this);
	}
	template <typename T = void> T Setup(float initAngle, int32_t angleSpeed, float surroundRadius, int32_t dirSign) {
		return ((T (*)(BulletTaoistSword*, float, int32_t, float, int32_t))(Il2CppBase() + 0x1DF0CE0))(this, initAngle, angleSpeed, surroundRadius, dirSign);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletTaoistSword*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DF0E24))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF0F6C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1138))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF11DC))(this);
	}
	template <typename T = uintptr_t> T BulletMove() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1248))(this);
	}
	template <typename T = uintptr_t> T Takeoff() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1328))(this);
	}
	template <typename T = uintptr_t> T Surround() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1408))(this);
	}
	template <typename T = uintptr_t> T Attack() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF14E8))(this);
	}
	template <typename T = float> T FixedUpdatePosition(Il2CppVector3 center) {
		return ((T (*)(BulletTaoistSword*, Il2CppVector3))(Il2CppBase() + 0x1DF15C8))(this, center);
	}
	template <typename T = float> T GetNomalizedAngle(float angle) {
		return ((T (*)(BulletTaoistSword*, float))(Il2CppBase() + 0x1DF0D94))(this, angle);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1870))(this);
	}
	template <typename T = void> T CreateBulletMover() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF18E8))(this);
	}
	template <typename T = uintptr_t> T MoveUpdate() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1A10))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletTaoistSword*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DF1B00))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1B58))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1B60))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAwakeTrue() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1B68))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBulletMover() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1B70))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_MoveUpdate() {
		return ((T (*)(BulletTaoistSword*))(Il2CppBase() + 0x1DF1B78))(this);
	}

};

}
