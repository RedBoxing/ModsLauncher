#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGArrowBuffTriggerElf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGArrowBuffTriggerElf"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& particle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGArrowBuffTriggerElf*))(Il2CppBase() + 0x1BAAB6C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGArrowBuffTriggerElf*))(Il2CppBase() + 0x1BAAC50))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGArrowBuffTriggerElf*))(Il2CppBase() + 0x1BAACB0))(this);
	}
	template <typename T = uintptr_t> T ParticleDestroy() {
		return ((T (*)(RGArrowBuffTriggerElf*))(Il2CppBase() + 0x1BAADC0))(this);
	}
	template <typename T = uintptr_t> T ParticleStop() {
		return ((T (*)(RGArrowBuffTriggerElf*))(Il2CppBase() + 0x1BAAEA0))(this);
	}
	template <typename T = void> T HideTrail() {
		return ((T (*)(RGArrowBuffTriggerElf*))(Il2CppBase() + 0x1BAAF80))(this);
	}
	template <typename T = void> T StopEffects() {
		return ((T (*)(RGArrowBuffTriggerElf*))(Il2CppBase() + 0x1BAB0BC))(this);
	}
	template <typename T = void> T TriggerBodyDestroy(uintptr_t other) {
		return ((T (*)(RGArrowBuffTriggerElf*, uintptr_t))(Il2CppBase() + 0x1BAB260))(this, other);
	}
	template <typename T = void> T TriggerWallDestroy(uintptr_t other) {
		return ((T (*)(RGArrowBuffTriggerElf*, uintptr_t))(Il2CppBase() + 0x1BABBB8))(this, other);
	}
	template <typename T = void> T iFixBaseProxy_TriggerBodyDestroy(uintptr_t P0) {
		return ((T (*)(RGArrowBuffTriggerElf*, uintptr_t))(Il2CppBase() + 0x1BAC4D0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWallDestroy(uintptr_t P0) {
		return ((T (*)(RGArrowBuffTriggerElf*, uintptr_t))(Il2CppBase() + 0x1BAC4D4))(this, P0);
	}

};

}
