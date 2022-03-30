#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Boss28HookTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Boss28HookTrigger"));
	}

	template <typename T = void*> T& hitTags() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _owner() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _hitTarget() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _hitPlayer() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _hitEnemy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& _hookTargetOffset() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Boss28HookTrigger*))(Il2CppBase() + 0x1B2EAC4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(Boss28HookTrigger*, uintptr_t))(Il2CppBase() + 0x1B2EC24))(this, other);
	}
	template <typename T = void> T ReleaseTarget() {
		return ((T (*)(Boss28HookTrigger*))(Il2CppBase() + 0x1B2F1DC))(this);
	}

};

}
