#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBullet"));
	}

	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& rigid2d() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& destroy_time() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& rotate_angle() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& can_rebound() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector2> T& initial_velocity() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& destroyCallback() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& critical() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = bool> T& dont_destroy() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = bool> T& manual_destroy() {
		return *(T*)((uintptr_t)this + 0xED);
	}
	template <typename T = uintptr_t> T& _b() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _bulletMover() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& _isHitOn() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T add_destroyCallback(uintptr_t value) {
		return ((T (*)(RGBullet*, uintptr_t))(Il2CppBase() + 0x19CDC38))(this, value);
	}
	template <typename T = void> T remove_destroyCallback(uintptr_t value) {
		return ((T (*)(RGBullet*, uintptr_t))(Il2CppBase() + 0x19CDD24))(this, value);
	}
	template <typename T = uintptr_t> T get_b() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19CDE10))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19CDF00))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19CE050))(this);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t source_object, int32_t damage, float the_speed, bool can_through, int32_t repel, int32_t camp) {
		return ((T (*)(RGBullet*, uintptr_t, int32_t, float, bool, int32_t, int32_t))(Il2CppBase() + 0x19CE188))(this, source_object, damage, the_speed, can_through, repel, camp);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGBullet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19CE468))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T UpdateInfoWithMotion(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGBullet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19CE918))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T AddAttribute(uintptr_t property, float value) {
		return ((T (*)(RGBullet*, uintptr_t, float))(Il2CppBase() + 0x19CEB4C))(this, property, value);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19CEEAC))(this);
	}
	template <typename T = void> T StopBullet() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19CF390))(this);
	}
	template <typename T = void> T SetBulletVelocity(Il2CppVector3 value) {
		return ((T (*)(RGBullet*, Il2CppVector3))(Il2CppBase() + 0x19CF508))(this, value);
	}
	template <typename T = void> T UpdateBulletVelocity(float newSpeed) {
		return ((T (*)(RGBullet*, float))(Il2CppBase() + 0x19CF6BC))(this, newSpeed);
	}
	template <typename T = void> T ReboundBullet(bool changeDirection) {
		return ((T (*)(RGBullet*, bool))(Il2CppBase() + 0x19CF844))(this, changeDirection);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(RGBullet*, uintptr_t))(Il2CppBase() + 0x19CFBD4))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19CFC48))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19CFCA8))(this);
	}
	template <typename T = uintptr_t> T get_bulletMover() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D0180))(this);
	}
	template <typename T = void> T set_bulletMover(uintptr_t value) {
		return ((T (*)(RGBullet*, uintptr_t))(Il2CppBase() + 0x19D01E0))(this, value);
	}
	template <typename T = void> T CreateBulletMover() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D02CC))(this);
	}
	template <typename T = uintptr_t> T DirectionUpdating() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D037C))(this);
	}
	template <typename T = void> T DirectionUpdate() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D045C))(this);
	}
	template <typename T = uintptr_t> T MoveUpdate() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D06DC))(this);
	}
	template <typename T = void> T StopDestroy() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D00EC))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D07BC))(this);
	}
	template <typename T = void> T DestroySelf_1(float totalTime) {
		return ((T (*)(RGBullet*, float))(Il2CppBase() + 0x19CF2C4))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(RGBullet*, float))(Il2CppBase() + 0x19D0820))(this, totalTime);
	}
	template <typename T = void> T CallDestroyCallback() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D092C))(this);
	}
	template <typename T = void> T ResetToProto() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D09A4))(this);
	}
	template <typename T = bool> T get_hitOn() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D0B8C))(this);
	}
	template <typename T = void> T set_hitOn(bool value) {
		return ((T (*)(RGBullet*, bool))(Il2CppBase() + 0x19CFA6C))(this, value);
	}
	template <typename T = void> T ChangeSize(float size) {
		return ((T (*)(RGBullet*, float))(Il2CppBase() + 0x19D0AC0))(this, size);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D0BEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D0C68))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGBullet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D0C70))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfoWithMotion(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGBullet*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D0CC8))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_SetSourceObject(uintptr_t P0) {
		return ((T (*)(RGBullet*, uintptr_t))(Il2CppBase() + 0x19D0D20))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_GetSourceObject() {
		return ((T (*)(RGBullet*))(Il2CppBase() + 0x19D0D28))(this);
	}

};

}
