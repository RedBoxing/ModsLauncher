#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Skill4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Skill4"));
	}

	template <typename T = uintptr_t> T& skillData() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& _finished() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& updateGrid() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& extraDelayRotate() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& soundPlayer() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& current_sequence() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T OnStart() {
		return ((T (*)(Skill4*))(Il2CppBase() + 0x209ADB0))(this);
	}
	template <typename T = bool> T OnUpdate(float dt) {
		return ((T (*)(Skill4*, float))(Il2CppBase() + 0x209B8FC))(this, dt);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(Skill4*))(Il2CppBase() + 0x209B9B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnStart() {
		return ((T (*)(Skill4*))(Il2CppBase() + 0x209BA2C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_OnUpdate(float P0) {
		return ((T (*)(Skill4*, float))(Il2CppBase() + 0x209BA30))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(Skill4*))(Il2CppBase() + 0x209BA34))(this);
	}

};

}
