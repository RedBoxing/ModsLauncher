#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Npc05ItemTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Npc05ItemTrigger"));
	}

	template <typename T = float> T& walkTime() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& npcWalkModels() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& animations() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& endSaturatorBase() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& endSaturatorRange() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& onTalkTrigger() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _npcObject() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& _talked() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Npc05ItemTrigger*))(Il2CppBase() + 0x4527CD8))(this);
	}
	template <typename T = void> T OnNpcInit(uintptr_t gameObject) {
		return ((T (*)(Npc05ItemTrigger*, uintptr_t))(Il2CppBase() + 0x4527D70))(this, gameObject);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(Npc05ItemTrigger*))(Il2CppBase() + 0x4527DFC))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(Npc05ItemTrigger*, uintptr_t))(Il2CppBase() + 0x4527E88))(this, controller);
	}
	template <typename T = uintptr_t> T AnimationFade() {
		return ((T (*)(Npc05ItemTrigger*))(Il2CppBase() + 0x45282F4))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(Npc05ItemTrigger*, uintptr_t))(Il2CppBase() + 0x45283D4))(this, controller);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(Npc05ItemTrigger*))(Il2CppBase() + 0x45284E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(Npc05ItemTrigger*, uintptr_t))(Il2CppBase() + 0x45284E8))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(Npc05ItemTrigger*, uintptr_t))(Il2CppBase() + 0x45284F0))(this, P0);
	}

};

}
