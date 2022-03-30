#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactRegularTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactRegularTrigger"));
	}

	template <typename T = uintptr_t> T& conditionTrigger() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _active() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ArtifactRegularTrigger*))(Il2CppBase() + 0x1CA816C))(this);
	}
	template <typename T = void> T OnEquip(uintptr_t weapon) {
		return ((T (*)(ArtifactRegularTrigger*, uintptr_t))(Il2CppBase() + 0x1CA82C8))(this, weapon);
	}
	template <typename T = void> T OnUnequip() {
		return ((T (*)(ArtifactRegularTrigger*))(Il2CppBase() + 0x1CA83EC))(this);
	}
	template <typename T = void> T _Trigger() {
		return ((T (*)(ArtifactRegularTrigger*))(Il2CppBase() + 0x1CA84E0))(this);
	}
	template <typename T = void> T OnTrigger(uintptr_t arg) {
		return ((T (*)(ArtifactRegularTrigger*, uintptr_t))(Il2CppBase() + 0x1CA8588))(this, arg);
	}
	template <typename T = void> T OnRevert() {
		return ((T (*)(ArtifactRegularTrigger*))(Il2CppBase() + 0x1CA8684))(this);
	}
	template <typename T = void> T Awakeb__2_0(uintptr_t arg) {
		return ((T (*)(ArtifactRegularTrigger*, uintptr_t))(Il2CppBase() + 0x1CA8728))(this, arg);
	}
	template <typename T = void> T Awakeb__2_1() {
		return ((T (*)(ArtifactRegularTrigger*))(Il2CppBase() + 0x1CA8794))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEquip(uintptr_t P0) {
		return ((T (*)(ArtifactRegularTrigger*, uintptr_t))(Il2CppBase() + 0x1CA87A4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnUnequip() {
		return ((T (*)(ArtifactRegularTrigger*))(Il2CppBase() + 0x1CA87AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTrigger(uintptr_t P0) {
		return ((T (*)(ArtifactRegularTrigger*, uintptr_t))(Il2CppBase() + 0x1CA87B4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnRevert() {
		return ((T (*)(ArtifactRegularTrigger*))(Il2CppBase() + 0x1CA87BC))(this);
	}

};

}
