#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSOfficer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSOfficer"));
	}

	template <typename T = uintptr_t> T& phone() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& flyDirection() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TSOfficer*))(Il2CppBase() + 0x18CAFC8))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSOfficer*))(Il2CppBase() + 0x18CB088))(this);
	}
	template <typename T = uintptr_t> T AirStrikeDelay() {
		return ((T (*)(TSOfficer*))(Il2CppBase() + 0x18CB1A4))(this);
	}
	template <typename T = void> T AirStrike(float flyAngle, bool playAudio) {
		return ((T (*)(TSOfficer*, float, bool))(Il2CppBase() + 0x18CB284))(this, flyAngle, playAudio);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(TSOfficer*))(Il2CppBase() + 0x18CBB40))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSOfficer*))(Il2CppBase() + 0x18CBB48))(this);
	}

};

}
