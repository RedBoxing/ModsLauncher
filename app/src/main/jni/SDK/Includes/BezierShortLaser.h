#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BezierShortLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BezierShortLaser"));
	}

	template <typename T = int32_t> T& resolution() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& tail() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& headSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& tailSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& headLight() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& tailLight() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& lineRendererMat() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& lineRendererLightMat() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& lineRendererTexId() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& linRendererLightColorId() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& idleTime() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& idlePeriod() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& idleScaleRange() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& pointRange() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = float> T& lerpValue() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& OnHurtTarget() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& customScaleFactor() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _lineRenderer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prevTargetList() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _bezierPointLists() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _lineBezierPoints() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& result1() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& result2() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& _animationStateStartTime() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& _prevHurtTime() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = float> T& _scaleFactor() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& targetObj() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& _polyTrigger() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& OnTakeAction() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hurtBoxColliderBuffer() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppVector3> T& lastPoint2() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppVector3> T& lastPoint3() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& scaleFactor() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T add_OnHurtTarget(uintptr_t value) {
		return ((T (*)(BezierShortLaser*, uintptr_t))(Il2CppBase() + 0x1B29674))(this, value);
	}
	template <typename T = void> T remove_OnHurtTarget(uintptr_t value) {
		return ((T (*)(BezierShortLaser*, uintptr_t))(Il2CppBase() + 0x1B29764))(this, value);
	}
	template <typename T = float> T get_HurtDuration() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B29854))(this);
	}
	template <typename T = void> T set_HurtDuration(float value) {
		return ((T (*)(BezierShortLaser*, float))(Il2CppBase() + 0x1B298B4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B29928))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B29BD8))(this);
	}
	template <typename T = void> T DestroySelf(float totalTime) {
		return ((T (*)(BezierShortLaser*, float))(Il2CppBase() + 0x1B29E10))(this, totalTime);
	}
	template <typename T = uintptr_t> T Destroying(float totalTime) {
		return ((T (*)(BezierShortLaser*, float))(Il2CppBase() + 0x1B29F44))(this, totalTime);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BezierShortLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2A050))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B2A1D0))(this);
	}
	template <typename T = void> T UpdateLaser() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B2A230))(this);
	}
	template <typename T = void> T UpdateCurve() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B2A2B0))(this);
	}
	template <typename T = void> T AnimationStateInit() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B29ED8))(this);
	}
	template <typename T = void> T UpdateAnimation() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B2AC80))(this);
	}
	template <typename T = void> T FadeOutAnimation() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B2B10C))(this);
	}
	template <typename T = void> T IdleAnimation() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B2AF60))(this);
	}
	template <typename T = void> T FadeInAnimation() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B2AD24))(this);
	}
	template <typename T = void> T EndAttack() {
		return ((T (*)(BezierShortLaser*))(Il2CppBase() + 0x1B2B348))(this);
	}
	template <typename T = void> T OnLineRenderSkinChange(uintptr_t headTailSp, uintptr_t lineTexture, uintptr_t lightColor) {
		return ((T (*)(BezierShortLaser*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2B3B8))(this, headTailSp, lineTexture, lightColor);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BezierShortLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2B624))(this, P0, P1);
	}

};

}
