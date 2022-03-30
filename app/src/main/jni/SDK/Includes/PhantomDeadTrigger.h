#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PhantomDeadTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhantomDeadTrigger"));
	}

	template <typename T = uintptr_t> T& sourceWeapon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& currentSourcePhantom() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& sourcePhantom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& phantomController() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PhantomDeadTrigger*))(Il2CppBase() + 0x4391110))(this);
	}
	template <typename T = void> T PhantomAwake() {
		return ((T (*)(PhantomDeadTrigger*))(Il2CppBase() + 0x438F914))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PhantomDeadTrigger*))(Il2CppBase() + 0x43911F0))(this);
	}

};

}
