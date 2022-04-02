#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemPromoteMan4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemPromoteMan_4"));
	}

	template <typename T = uintptr_t> T& statckAnimator() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemPromoteMan4*))(Il2CppBase() + 0x1CD8248))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ItemPromoteMan4*))(Il2CppBase() + 0x1CD8364))(this);
	}
	template <typename T = uintptr_t> T Attacking() {
		return ((T (*)(ItemPromoteMan4*))(Il2CppBase() + 0x1CD83DC))(this);
	}
	template <typename T = void> T MakeDamage() {
		return ((T (*)(ItemPromoteMan4*))(Il2CppBase() + 0x1CD84BC))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemPromoteMan4*, uintptr_t))(Il2CppBase() + 0x1CD85A0))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccessb__5_2() {
		return ((T (*)(ItemPromoteMan4*))(Il2CppBase() + 0x1CD8914))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemPromoteMan4*))(Il2CppBase() + 0x1CD89BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemPromoteMan4*, uintptr_t))(Il2CppBase() + 0x1CD89C0))(this, P0);
	}

};

}
