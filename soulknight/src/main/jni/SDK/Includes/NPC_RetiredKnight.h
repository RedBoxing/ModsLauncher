#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NPCRetiredKnight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_RetiredKnight"));
	}

	template <typename T = uintptr_t> T& _adData() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _bubble() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& _rewardName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _rewardType() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _adRewardSprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _checkBubbleTimer() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& debug() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& blueprint_created() {
		return *(T*)((uintptr_t)this + 0xD1);
	}

	template <typename T = bool> T IsAdReady() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x437F0A4))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x437F2B8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x437F860))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x437F8D0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(NPCRetiredKnight*, uintptr_t))(Il2CppBase() + 0x437F9F4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(NPCRetiredKnight*, uintptr_t))(Il2CppBase() + 0x437FAB0))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(NPCRetiredKnight*, uintptr_t))(Il2CppBase() + 0x437FB4C))(this, controller);
	}
	template <typename T = void> T GetAdReward() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x437FF08))(this);
	}
	template <typename T = bool> T HasFishRodBluePrintOrUnlock() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x437F1E0))(this);
	}
	template <typename T = void> T Awakeb__10_0() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x43801AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x43801E8))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(NPCRetiredKnight*))(Il2CppBase() + 0x43801F0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(NPCRetiredKnight*, uintptr_t))(Il2CppBase() + 0x43801F8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(NPCRetiredKnight*, uintptr_t))(Il2CppBase() + 0x4380200))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(NPCRetiredKnight*, uintptr_t))(Il2CppBase() + 0x4380208))(this, P0);
	}

};

}
