#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffNightmare
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffNightmare"));
	}

	template <typename T = float> T& initSaturation() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& maxSaturation() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& maxDamage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& isStrengthen() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ghostHand() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& sourceObject() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& extraDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& ghostDamage() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& enemyController() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& hsvShader() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& currentDamage() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& skinColorCfgs() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& curColorCfg() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& icons() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = bool> T get_isbuffEnd() {
		return ((T (*)(BuffNightmare*))(Il2CppBase() + 0x459B0FC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BuffNightmare*))(Il2CppBase() + 0x459B174))(this);
	}
	template <typename T = void> T SetUpIcon() {
		return ((T (*)(BuffNightmare*))(Il2CppBase() + 0x459B30C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BuffNightmare*))(Il2CppBase() + 0x459B5D8))(this);
	}
	template <typename T = void> T BuffEndUpdate() {
		return ((T (*)(BuffNightmare*))(Il2CppBase() + 0x459B638))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffNightmare*, uintptr_t))(Il2CppBase() + 0x459BB54))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffNightmare*))(Il2CppBase() + 0x459BBC8))(this);
	}
	template <typename T = void> T InitState(bool isStrengthen, uintptr_t ghostHand, int32_t ghostDamage) {
		return ((T (*)(BuffNightmare*, bool, uintptr_t, int32_t))(Il2CppBase() + 0x459BC28))(this, isStrengthen, ghostHand, ghostDamage);
	}
	template <typename T = int32_t> T ExtraDamage(uintptr_t source, int32_t damage, bool addDamage) {
		return ((T (*)(BuffNightmare*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x459BCC4))(this, source, damage, addDamage);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(BuffNightmare*, int32_t))(Il2CppBase() + 0x459BD78))(this, damage);
	}
	template <typename T = void> T Summon(Il2CppVector3 position) {
		return ((T (*)(BuffNightmare*, Il2CppVector3))(Il2CppBase() + 0x459B860))(this, position);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffNightmare*))(Il2CppBase() + 0x459BF30))(this);
	}

};

}
