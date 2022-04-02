#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunRebornCross
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunRebornCross"));
	}

	template <typename T = Il2CppString*> T& word() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T SetAttack(bool isAttack, bool manual) {
		return ((T (*)(GunRebornCross*, bool, bool))(Il2CppBase() + 0x2172370))(this, isAttack, manual);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunRebornCross*, bool, bool))(Il2CppBase() + 0x21724E0))(this, P0, P1);
	}

};

}
