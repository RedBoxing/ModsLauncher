#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WolfOfDruidController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WolfOfDruidController"));
	}

	template <typename T = uintptr_t> T& swoop_growl_clip() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& mTrigger() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = float> T& originSpeedRate() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = float> T& swoopDistance() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = float> T& swoopDuration() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> T& swoopStatus() {
		return *(T*)((uintptr_t)this + 0x1D4);
	}
	template <typename T = uintptr_t> T& mat() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}
	template <typename T = Il2CppVector2> T& tempv2() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4605030))(this);
	}
	template <typename T = bool> T get_isDoingSwoop() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4605150))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x46051B8))(this);
	}
	template <typename T = void> T Scout() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x46058E4))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x46059D8))(this);
	}
	template <typename T = void> T EndCycle() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4605B90))(this);
	}
	template <typename T = void> T DoSwoop(uintptr_t target) {
		return ((T (*)(WolfOfDruidController*, uintptr_t))(Il2CppBase() + 0x4605C88))(this, target);
	}
	template <typename T = bool> T CanSwoop() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x460555C))(this);
	}
	template <typename T = void> T ToggleCollider(bool enabled) {
		return ((T (*)(WolfOfDruidController*, bool))(Il2CppBase() + 0x4605DB0))(this, enabled);
	}
	template <typename T = bool> T IsTargetEnabled() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4605420))(this);
	}
	template <typename T = void> T Swoop() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x46056F4))(this);
	}
	template <typename T = void> T OnDoSwoop() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4605EC0))(this);
	}
	template <typename T = uintptr_t> T AfterSwoopAtk() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x46061B4))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4606294))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4606524))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4606528))(this);
	}
	template <typename T = void> T iFixBaseProxy_Scout() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x460652C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4606530))(this);
	}
	template <typename T = void> T iFixBaseProxy_EndCycle() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4606534))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(WolfOfDruidController*))(Il2CppBase() + 0x4606538))(this);
	}

};

}
