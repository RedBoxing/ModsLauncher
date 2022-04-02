#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunSalamanderExtra
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunSalamanderExtra"));
	}

	template <typename T = uintptr_t> T& wingManTransform() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& wingManSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& gunSprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& wingManWeapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& targetPoint() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& activeSmoothTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& inActiveTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _weapon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& _currentVelocity() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& _inActivePreparePosition() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppVector3> T& _wingManPosition() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& _inActiveStartTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _wingManAttack() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& AnimIdAtkT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x2174AAC))(this);
	}
	template <typename T = void> T InActive() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x2174C3C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x2174DC0))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x2175038))(this);
	}
	template <typename T = void> T WingManStop() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x2175404))(this);
	}
	template <typename T = void> T WingManAttack() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x21754E8))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x217556C))(this);
	}
	template <typename T = void> T ActiveUpdate() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x21757C0))(this);
	}
	template <typename T = void> T InactivePrepareUpdate() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x21755FC))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x2175BA8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x2175C70))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunSalamanderExtra*))(Il2CppBase() + 0x2175D8C))(this);
	}

};

}
