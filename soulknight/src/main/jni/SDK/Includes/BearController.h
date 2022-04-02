#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BearController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BearController"));
	}

	template <typename T = Il2CppVector3> T& hpBarOffset() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& isMount() {
		return *(T*)((uintptr_t)this + 0x1C4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B22988))(this);
	}
	template <typename T = uintptr_t> T CreatePetBar() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B22A10))(this);
	}
	template <typename T = void> T AtkProcess() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B22B14))(this);
	}
	template <typename T = void> T Recovered() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B22B78))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B22C2C))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B22E2C))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B22F38))(this);
	}
	template <typename T = void> T ForceAttack(bool isSpecial) {
		return ((T (*)(BearController*, bool))(Il2CppBase() + 0x1B23024))(this, isSpecial);
	}
	template <typename T = void> T ForceRecover() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B2310C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B23398))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreatePetBar() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B233A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_AtkProcess() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B233A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Recovered() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B233B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B233B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B233C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BearController*))(Il2CppBase() + 0x1B233C8))(this);
	}

};

}
