#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBezierLaser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBezierLaser"));
	}

	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& defaultType() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = float> T& laserRange() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& laserClip() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _laser() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _endLaserList() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& _attackStopTime() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = void*> T& _constrainTargetSet() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& _loopPlayer() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F138))(this);
	}
	template <typename T = float> T get_AttackCD() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F198))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F218))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F2C0))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F3B4))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunBezierLaser*, bool, bool))(Il2CppBase() + 0x257F410))(this, value1, setHandAttack);
	}
	template <typename T = void> T LaserEnd() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F498))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F71C))(this);
	}
	template <typename T = void> T UpdateLaser() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F7FC))(this);
	}
	template <typename T = void> T UpdateState() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257F784))(this);
	}
	template <typename T = void> T KeyDownUpdate() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x257FC1C))(this);
	}
	template <typename T = void> T AttackStart() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x258007C))(this);
	}
	template <typename T = void> T AttackStop() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x25800F4))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x258017C))(this);
	}
	template <typename T = bool> T IsHold() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x258020C))(this);
	}
	template <typename T = void> T OnWeaponSpeedChanged() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x258026C))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x25804FC))(this);
	}
	template <typename T = void> T LaserMakeConsume() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580950))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580B8C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580B94))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580B9C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunBezierLaser*, bool, bool))(Il2CppBase() + 0x2580BA4))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_AttackStart() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580BB4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AttackStop() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580BBC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580BC4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsHold() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580BCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnWeaponSpeedChanged() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580BD4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(GunBezierLaser*))(Il2CppBase() + 0x2580BDC))(this);
	}

};

}
