#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEnergyPot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEnergyPot"));
	}

	template <typename T = int32_t> T& energy() {
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
		return ((T (*)(RGEnergyPot*))(Il2CppBase() + 0x1C429E4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGEnergyPot*, uintptr_t))(Il2CppBase() + 0x1C42A74))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGEnergyPot*, uintptr_t))(Il2CppBase() + 0x1C42C8C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGEnergyPot*, uintptr_t))(Il2CppBase() + 0x1C42E4C))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGEnergyPot*))(Il2CppBase() + 0x1C432E8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGEnergyPot*))(Il2CppBase() + 0x1C43348))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGEnergyPot*))(Il2CppBase() + 0x1C433AC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGEnergyPot*))(Il2CppBase() + 0x1C4340C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGEnergyPot*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1C43480))(this, controller, ext_info);
	}

};

}
