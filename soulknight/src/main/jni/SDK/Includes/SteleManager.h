#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SteleManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SteleManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& steleCtrls() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ctrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& targetObj() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& atkSteleCtrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& steleStack() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& can_atk() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T SetController(uintptr_t ctrl) {
		return ((T (*)(SteleManager*, uintptr_t))(Il2CppBase() + 0x42A52DC))(this, ctrl);
	}
	template <typename T = uintptr_t> T GetCtrl() {
		return ((T (*)(SteleManager*))(Il2CppBase() + 0x42A5350))(this);
	}
	template <typename T = void> T AddSteleCtrl(uintptr_t stele) {
		return ((T (*)(SteleManager*, uintptr_t))(Il2CppBase() + 0x42A53B0))(this, stele);
	}
	template <typename T = void> T RemoveSteleCtrl(uintptr_t stele) {
		return ((T (*)(SteleManager*, uintptr_t))(Il2CppBase() + 0x42A5468))(this, stele);
	}
	template <typename T = void> T UpdateSteleAttack() {
		return ((T (*)(SteleManager*))(Il2CppBase() + 0x42A5520))(this);
	}
	template <typename T = bool> T Attacking() {
		return ((T (*)(SteleManager*))(Il2CppBase() + 0x42A5B04))(this);
	}
	template <typename T = void> T FindTargetReset() {
		return ((T (*)(SteleManager*))(Il2CppBase() + 0x42A5C88))(this);
	}
	template <typename T = void> T FindTarget() {
		return ((T (*)(SteleManager*))(Il2CppBase() + 0x42A5588))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(SteleManager*))(Il2CppBase() + 0x42A58FC))(this);
	}
	template <typename T = uintptr_t> T LanuchSteleAttack() {
		return ((T (*)(SteleManager*))(Il2CppBase() + 0x42A6058))(this);
	}
	template <typename T = uintptr_t> T FindNextClosestSteleCtrl(uintptr_t curSteleCtrl) {
		return ((T (*)(SteleManager*, uintptr_t))(Il2CppBase() + 0x42A5D2C))(this, curSteleCtrl);
	}

};

}
