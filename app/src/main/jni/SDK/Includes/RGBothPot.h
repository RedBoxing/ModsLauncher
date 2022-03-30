#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBothPot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBothPot"));
	}

	template <typename T = int32_t> T& health() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& item_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGBothPot*))(Il2CppBase() + 0x1BBC1B0))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBothPot*, uintptr_t))(Il2CppBase() + 0x1BBC244))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGBothPot*, uintptr_t))(Il2CppBase() + 0x1BBC45C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGBothPot*, uintptr_t))(Il2CppBase() + 0x1BBC61C))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGBothPot*))(Il2CppBase() + 0x1BBCC50))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGBothPot*))(Il2CppBase() + 0x1BBCCB0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGBothPot*))(Il2CppBase() + 0x1BBCD14))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGBothPot*))(Il2CppBase() + 0x1BBCD74))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGBothPot*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1BBCDE8))(this, controller, ext_info);
	}
	template <typename T = void> T RestoreMercenaries() {
		return ((T (*)(RGBothPot*))(Il2CppBase() + 0x1BBC930))(this);
	}

};

}
