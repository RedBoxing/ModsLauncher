#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AirDrop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AirDrop"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& drop() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& whole() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& open() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& targetPos() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> static T& height() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& dropTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& shadow() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& trigger() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& collider2d() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& potDistributions() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& maxDropCoin() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& dropEnergy() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> static T& MaxAirDropCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& AirDropTimestKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& finalLv() {
		return *(T*)((uintptr_t)this + 0x100);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A169D0))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(AirDrop*, int32_t))(Il2CppBase() + 0x1A16F08))(this, seed);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A1700C))(this);
	}
	template <typename T = void> T ChangeStateView(int32_t state) {
		return ((T (*)(AirDrop*, int32_t))(Il2CppBase() + 0x1A16BF0))(this, state);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(AirDrop*, uintptr_t))(Il2CppBase() + 0x1A17114))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(AirDrop*, uintptr_t))(Il2CppBase() + 0x1A17334))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(AirDrop*, uintptr_t))(Il2CppBase() + 0x1A174F4))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A17AB8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A17B18))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(AirDrop*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A17BA8))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A17C60))(this);
	}
	template <typename T = void> T OpenAirDrop() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A1772C))(this);
	}
	template <typename T = uintptr_t> T CreateAsset() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A17CD4))(this);
	}
	template <typename T = uintptr_t> T CreatePot() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A17D90))(this);
	}
	template <typename T = uintptr_t> T CreateSampleWeapon() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A17EA4))(this);
	}
	template <typename T = void> T CreateCoin() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A17FCC))(this);
	}
	template <typename T = void> T Startb__20_0() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A18560))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(AirDrop*, int32_t))(Il2CppBase() + 0x1A186C0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(AirDrop*, uintptr_t))(Il2CppBase() + 0x1A186C8))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A186D0))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A186D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(AirDrop*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1A186E0))(this, P0, P1);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(AirDrop*))(Il2CppBase() + 0x1A186E8))(this);
	}

};

}
