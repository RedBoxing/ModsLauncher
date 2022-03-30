#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopChestStart
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopChestStart"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& can_open() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = int32_t> T get_chestLevel() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440A3C0))(this);
	}
	template <typename T = int32_t> T get_tokenCoinCount() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440A450))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440A4D8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440A5BC))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TroopChestStart*, uintptr_t))(Il2CppBase() + 0x440A760))(this, controller);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440A7FC))(this);
	}
	template <typename T = void> T RefreshSprites() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440A628))(this);
	}
	template <typename T = void> T GetWeapon() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440AC3C))(this);
	}
	template <typename T = void> T GetPot() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440B2B4))(this);
	}
	template <typename T = void> T GetCoin() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440AFEC))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(TroopChestStart*, uintptr_t))(Il2CppBase() + 0x440B4B0))(this, other);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(TroopChestStart*, int32_t))(Il2CppBase() + 0x440B5C4))(this, seed);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(TroopChestStart*))(Il2CppBase() + 0x440B6A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TroopChestStart*, uintptr_t))(Il2CppBase() + 0x440B6AC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(TroopChestStart*, uintptr_t))(Il2CppBase() + 0x440B6B4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(TroopChestStart*, int32_t))(Il2CppBase() + 0x440B6BC))(this, P0);
	}

};

}
