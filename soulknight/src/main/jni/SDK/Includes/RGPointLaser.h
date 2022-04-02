#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGPointLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGPointLaser"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& lockPosition() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& offsetHead() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& offsetTail() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& bodyLengthFactor() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& offsetTailBullet() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& tail() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& body() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _source() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& lastTarget() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& isNextLaser() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& hitList() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& _destroyTime() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = uintptr_t> T get_source() {
		return ((T (*)(RGPointLaser*))(Il2CppBase() + 0x1C61B9C))(this);
	}
	template <typename T = uintptr_t> T get_target() {
		return ((T (*)(RGPointLaser*))(Il2CppBase() + 0x1C61C78))(this);
	}
	template <typename T = void> T set_target(uintptr_t value) {
		return ((T (*)(RGPointLaser*, uintptr_t))(Il2CppBase() + 0x1C61C80))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RGPointLaser*))(Il2CppBase() + 0x1C61C88))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGPointLaser*))(Il2CppBase() + 0x1C61D70))(this);
	}
	template <typename T = uintptr_t> T DelayDestroy() {
		return ((T (*)(RGPointLaser*))(Il2CppBase() + 0x1C627E4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RGPointLaser*))(Il2CppBase() + 0x1C628C4))(this);
	}
	template <typename T = void> T UpdateInfo(float range, uintptr_t target, uintptr_t laserType, bool lockPosition) {
		return ((T (*)(RGPointLaser*, float, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1C6296C))(this, range, target, laserType, lockPosition);
	}
	template <typename T = void> T UpdateInfo_1(uintptr_t source, uintptr_t target) {
		return ((T (*)(RGPointLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C62A20))(this, source, target);
	}
	template <typename T = void> T UpdateInfo_2(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(RGPointLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C62BF0))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetLastTarget(uintptr_t lastTarget) {
		return ((T (*)(RGPointLaser*, uintptr_t))(Il2CppBase() + 0x1C62DA4))(this, lastTarget);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(RGPointLaser*))(Il2CppBase() + 0x1C61F64))(this);
	}
	template <typename T = void> T Show(Il2CppVector3 sourcePos, Il2CppVector3 targetPos, bool playAudio) {
		return ((T (*)(RGPointLaser*, Il2CppVector3, Il2CppVector3, bool))(Il2CppBase() + 0x1C62E64))(this, sourcePos, targetPos, playAudio);
	}
	template <typename T = void> T PointLaserAttack(uintptr_t source, uintptr_t target) {
		return ((T (*)(RGPointLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C624F0))(this, source, target);
	}
	template <typename T = uintptr_t> T LockingPosition(uintptr_t source, uintptr_t target) {
		return ((T (*)(RGPointLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C633D4))(this, source, target);
	}
	template <typename T = void> T LockPosition(Il2CppVector3 sourcePos, Il2CppVector3 targetPos) {
		return ((T (*)(RGPointLaser*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x1C63050))(this, sourcePos, targetPos);
	}
	template <typename T = void> T FlushInfo() {
		return ((T (*)(RGPointLaser*))(Il2CppBase() + 0x1C634FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_UpdateInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RGPointLaser*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C6364C))(this, P0, P1);
	}

};

}
