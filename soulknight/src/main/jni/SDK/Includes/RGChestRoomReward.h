#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGChestRoomReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGChestRoomReward"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& award_count() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& has_coin() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& onEmptyChestOpen() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _canOpen() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _isEmptyChest() {
		return *(T*)((uintptr_t)this + 0x51);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGChestRoomReward*))(Il2CppBase() + 0x19E21DC))(this);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(RGChestRoomReward*))(Il2CppBase() + 0x19E22C0))(this);
	}
	template <typename T = void> T GetWeapon() {
		return ((T (*)(RGChestRoomReward*))(Il2CppBase() + 0x19E3238))(this);
	}
	template <typename T = void> T GetPot() {
		return ((T (*)(RGChestRoomReward*))(Il2CppBase() + 0x19E303C))(this);
	}
	template <typename T = void> T GetCoin() {
		return ((T (*)(RGChestRoomReward*))(Il2CppBase() + 0x19E2964))(this);
	}
	template <typename T = void> T OnTriggerStay2D(uintptr_t other) {
		return ((T (*)(RGChestRoomReward*, uintptr_t))(Il2CppBase() + 0x19E35D4))(this, other);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RGChestRoomReward*, int32_t))(Il2CppBase() + 0x19E36E0))(this, seed);
	}
	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(RGChestRoomReward*))(Il2CppBase() + 0x19E3758))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGChestRoomReward*))(Il2CppBase() + 0x19E380C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(RGChestRoomReward*, int32_t))(Il2CppBase() + 0x19E38A8))(this, P0);
	}

};

}
