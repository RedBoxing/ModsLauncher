#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill7
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill7"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& repeat() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _finished() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& current_sequence() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(Skill7*))(Il2CppBase() + 0x209F408))(this);
	}
	template <typename T = void> T OnEnd() {
		return ((T (*)(Skill7*))(Il2CppBase() + 0x209FA54))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Skill7*))(Il2CppBase() + 0x209FAB8))(this);
	}
	template <typename T = void> T Gen(int32_t _dir, float alertDuration, Il2CppVector3 posOffset) {
		return ((T (*)(Skill7*, int32_t, float, Il2CppVector3))(Il2CppBase() + 0x209FB2C))(this, _dir, alertDuration, posOffset);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(Skill7*, float))(Il2CppBase() + 0x20A04F4))(this, dt);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(Skill7*))(Il2CppBase() + 0x20A0570))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEnd() {
		return ((T (*)(Skill7*))(Il2CppBase() + 0x20A0574))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(Skill7*))(Il2CppBase() + 0x20A05D4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Skill7*, float))(Il2CppBase() + 0x20A05D8))(this, P0);
	}

};

}
