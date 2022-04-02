#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGContainer"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& inStore() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& the_item() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& sell_obj() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& read_xml() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& total() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& object_distribution() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& skinItem() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0xB0);
	}

	template <typename T = uintptr_t> T get_sellObj() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E4950))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E49B0))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E4A0C))(this);
	}
	template <typename T = void> T OnLocalPlayerEnter() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E4A68))(this);
	}
	template <typename T = void> T OnLocalPlayerExit() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E4AC4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGContainer*, uintptr_t))(Il2CppBase() + 0x19E4B20))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGContainer*, uintptr_t))(Il2CppBase() + 0x19E5104))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGContainer*, uintptr_t))(Il2CppBase() + 0x19E52FC))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGContainer*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19E5864))(this, controller, ext_info);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E5004))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E5B6C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E5BF8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGContainer*))(Il2CppBase() + 0x19E5C58))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RGContainer*, int32_t))(Il2CppBase() + 0x19E5CCC))(this, seed);
	}
	template <typename T = void> T SetItem(uintptr_t obj) {
		return ((T (*)(RGContainer*, uintptr_t))(Il2CppBase() + 0x19E642C))(this, obj);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(RGContainer*, int32_t))(Il2CppBase() + 0x19E6A38))(this, P0);
	}

};

}
