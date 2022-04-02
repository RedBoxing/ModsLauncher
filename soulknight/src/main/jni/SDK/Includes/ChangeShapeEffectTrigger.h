#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeShapeEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeShapeEffectTrigger"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& shape_arr() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& probability() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& has_hit() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(ChangeShapeEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x18729D4))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T ChangeShape(uintptr_t hit_obj) {
		return ((T (*)(ChangeShapeEffectTrigger*, uintptr_t))(Il2CppBase() + 0x1872B60))(this, hit_obj);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(ChangeShapeEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x18730C8))(this, P0, P1, P2);
	}

};

}
