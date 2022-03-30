#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinExhibition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinExhibition"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& skin_index() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& author() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& skin_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& passTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& unlock() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& item_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isLarge() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SkinExhibition*))(Il2CppBase() + 0x1834E88))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SkinExhibition*, uintptr_t))(Il2CppBase() + 0x18358B4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(SkinExhibition*, uintptr_t))(Il2CppBase() + 0x1835A74))(this, other);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(SkinExhibition*))(Il2CppBase() + 0x1835C00))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(SkinExhibition*))(Il2CppBase() + 0x1835C60))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(SkinExhibition*))(Il2CppBase() + 0x1835CEC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(SkinExhibition*))(Il2CppBase() + 0x1835D4C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(SkinExhibition*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1835DAC))(this, controller, ext_info);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(SkinExhibition*, uintptr_t))(Il2CppBase() + 0x1835E24))(this, controller);
	}
	template <typename T = void> T ResetSprite() {
		return ((T (*)(SkinExhibition*))(Il2CppBase() + 0x1835620))(this);
	}
	template <typename T = void> T ChangeEdge() {
		return ((T (*)(SkinExhibition*))(Il2CppBase() + 0x18354B0))(this);
	}

};

}
