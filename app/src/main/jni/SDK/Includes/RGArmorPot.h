#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGArmorPot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGArmorPot"));
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
	template <typename T = uintptr_t> T& replacePot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& hasMech() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGArmorPot*))(Il2CppBase() + 0x1BA933C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RGArmorPot*))(Il2CppBase() + 0x1BA9668))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(RGArmorPot*))(Il2CppBase() + 0x1BA98A4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGArmorPot*, uintptr_t))(Il2CppBase() + 0x1BA9900))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RGArmorPot*, uintptr_t))(Il2CppBase() + 0x1BA9B18))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RGArmorPot*, uintptr_t))(Il2CppBase() + 0x1BA9CD8))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(RGArmorPot*))(Il2CppBase() + 0x1BAA070))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RGArmorPot*))(Il2CppBase() + 0x1BAA0D0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(RGArmorPot*))(Il2CppBase() + 0x1BAA134))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(RGArmorPot*))(Il2CppBase() + 0x1BAA194))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RGArmorPot*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1BAA208))(this, controller, ext_info);
	}
	template <typename T = bool> T HasMech() {
		return ((T (*)(RGArmorPot*))(Il2CppBase() + 0x1BA9408))(this);
	}

};

}
