#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletShadowBall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletShadowBall"));
	}

	template <typename T = bool> T& needSurround() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = int32_t> T& dirSign() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppVector2> T& centerPoint() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& surroundRadius() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& hideWhileSurround() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& trail() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = bool> T& isLight() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = bool> T& castBuff() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& onStartAttack() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& _particleSystem() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _spriteRenderers() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& needTakeParticleToEffectLayer() {
		return *(T*)((uintptr_t)this + 0x170);
	}

	template <typename T = float> T get_radians() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238EE64))(this);
	}
	template <typename T = float> T get_fixedAngle() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238EED0))(this);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238EFE0))(this);
	}
	template <typename T = uintptr_t> T get_source() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238F14C))(this);
	}
	template <typename T = void> T add_onStartAttack(uintptr_t value) {
		return ((T (*)(BulletShadowBall*, uintptr_t))(Il2CppBase() + 0x238F1C0))(this, value);
	}
	template <typename T = void> T remove_onStartAttack(uintptr_t value) {
		return ((T (*)(BulletShadowBall*, uintptr_t))(Il2CppBase() + 0x238F2B0))(this, value);
	}
	template <typename T = void> T Setup(float initAngle, int32_t angleSpeed, float surroundRadius, int32_t dirSign, bool isLight, int32_t index, bool castBuff) {
		return ((T (*)(BulletShadowBall*, float, int32_t, float, int32_t, bool, int32_t, bool))(Il2CppBase() + 0x238F3A0))(this, initAngle, angleSpeed, surroundRadius, dirSign, isLight, index, castBuff);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BulletShadowBall*, uintptr_t, uintptr_t))(Il2CppBase() + 0x238F528))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238F670))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238F890))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238F968))(this);
	}
	template <typename T = uintptr_t> T BulletMove() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238F9D4))(this);
	}
	template <typename T = uintptr_t> T Takeoff() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238FAB4))(this);
	}
	template <typename T = uintptr_t> T Surround() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238FB94))(this);
	}
	template <typename T = uintptr_t> T Attack() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238FC74))(this);
	}
	template <typename T = float> T FixedUpdatePosition(Il2CppVector3 center) {
		return ((T (*)(BulletShadowBall*, Il2CppVector3))(Il2CppBase() + 0x238FD54))(this, center);
	}
	template <typename T = float> T GetNomalizedAngle(float angle) {
		return ((T (*)(BulletShadowBall*, float))(Il2CppBase() + 0x238F498))(this, angle);
	}
	template <typename T = void> T AddDelayTime(float deltaTime) {
		return ((T (*)(BulletShadowBall*, float))(Il2CppBase() + 0x238FF74))(this, deltaTime);
	}
	template <typename T = void> T SetAwakeTrue() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x238FFF0))(this);
	}
	template <typename T = void> T CreateBulletMover() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x2390068))(this);
	}
	template <typename T = uintptr_t> T MoveUpdate() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x239020C))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BulletShadowBall*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2390308))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x2390360))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x2390368))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAwakeTrue() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x2390370))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBulletMover() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x2390378))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_MoveUpdate() {
		return ((T (*)(BulletShadowBall*))(Il2CppBase() + 0x2390380))(this);
	}

};

}
