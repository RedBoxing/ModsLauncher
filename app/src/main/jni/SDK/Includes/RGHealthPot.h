#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGHealthPot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGHealthPot"));
	}

	template <typename T = int32_t> T& health() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& item_value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& item_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& can_use() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGHealthPot*))(Il2CppBase() + 0x1C5D070))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGHealthPot*, uintptr_t))(Il2CppBase() + 0x1C5D100))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGHealthPot*, uintptr_t))(Il2CppBase() + 0x1C5D318))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGHealthPot*, uintptr_t))(Il2CppBase() + 0x1C5D4D8))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGHealthPot*))(Il2CppBase() + 0x1C5DBB0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGHealthPot*))(Il2CppBase() + 0x1C5DC10))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGHealthPot*))(Il2CppBase() + 0x1C5DC74))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGHealthPot*))(Il2CppBase() + 0x1C5DCD4))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGHealthPot*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1C5DD48))(this, controller, ext_info);
	}
	template <typename T = void> T RestoreMercenaries() {
		return ((T (*)(RGHealthPot*))(Il2CppBase() + 0x1C5D890))(this);
	}

};

}
