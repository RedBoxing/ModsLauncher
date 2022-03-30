#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BezierLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BezierLaser"));
	}

	template <typename T = uintptr_t> T& _random() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& resolution() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& tail() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& fadeInTime() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& fadeOutTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& idlePeriod() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& idleScaleRange() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = float> T& obstacleHitRange() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& OnHurtTarget() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& customScaleFactor() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& _lineRenderer() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prevTargetList() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _bezierPointLists() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _lineBezierPoints() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _tails() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& _animationStateStartTime() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& _chainTargetCaster() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = float> T& _prevHurtTime() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& _scaleFactor() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hurtBoxColliderBuffer() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& effectTriggers() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = void> T add_OnHurtTarget(uintptr_t value) {
		return ((T (*)(BezierLaser*, uintptr_t))(Il2CppBase() + 0x1B2420C))(this, value);
	}
	template <typename T = void> T remove_OnHurtTarget(uintptr_t value) {
		return ((T (*)(BezierLaser*, uintptr_t))(Il2CppBase() + 0x1B242F8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TargetList() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B243E4))(this);
	}
	template <typename T = float> T get_HurtDuration() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B24458))(this);
	}
	template <typename T = void> T set_HurtDuration(float value) {
		return ((T (*)(BezierLaser*, float))(Il2CppBase() + 0x1B244B8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B2452C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B24650))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(BezierLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B249B0))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T Init(float checkRange, uintptr_t rgRandom, void* constrainObjects) {
		return ((T (*)(BezierLaser*, float, uintptr_t, void*))(Il2CppBase() + 0x1B24AD0))(this, checkRange, rgRandom, constrainObjects);
	}
	template <typename T = void> T UpdateLaser() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B24C20))(this);
	}
	template <typename T = void> T UpdateCurve() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B24CAC))(this);
	}
	template <typename T = void> T AnimationStateInit() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B248DC))(this);
	}
	template <typename T = void> T UpdateAnimation() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B25A28))(this);
	}
	template <typename T = void> T FadeOutAnimation() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B261AC))(this);
	}
	template <typename T = void> T IdleAnimation() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B25F0C))(this);
	}
	template <typename T = void> T FadeInAnimation() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B25C04))(this);
	}
	template <typename T = void> T EndAttack() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B264B4))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B26524))(this);
	}
	template <typename T = void> T HurtInit() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B24948))(this);
	}
	template <typename T = void> T UpdateHurt() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B25ACC))(this);
	}
	template <typename T = void> T HurtBox() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B26728))(this);
	}
	template <typename T = void> T HurtBox_1(uintptr_t sourceObject) {
		return ((T (*)(BezierLaser*, uintptr_t))(Il2CppBase() + 0x1B26DA8))(this, sourceObject);
	}
	template <typename T = void> T HurtTarget() {
		return ((T (*)(BezierLaser*))(Il2CppBase() + 0x1B268AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BezierLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B27190))(this, P0, P1);
	}

};

}
