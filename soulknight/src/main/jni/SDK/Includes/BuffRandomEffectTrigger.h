#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffRandomEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffRandomEffectTrigger"));
	}

	template <typename T = int32_t> T& possibility() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buffs() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& hitWall() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = void> T TriggerWith(uintptr_t other, bool isCritic, bool canThrough) {
		return ((T (*)(BuffRandomEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x459CFC8))(this, other, isCritic, canThrough);
	}
	template <typename T = void> T AddBuff(uintptr_t target, uintptr_t targetbuff, Il2CppVector3 targetPos) {
		return ((T (*)(BuffRandomEffectTrigger*, uintptr_t, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x459D428))(this, target, targetbuff, targetPos);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BuffRandomEffectTrigger*))(Il2CppBase() + 0x459E3CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_TriggerWith(uintptr_t P0, bool P1, bool P2) {
		return ((T (*)(BuffRandomEffectTrigger*, uintptr_t, bool, bool))(Il2CppBase() + 0x459E558))(this, P0, P1, P2);
	}

};

}
