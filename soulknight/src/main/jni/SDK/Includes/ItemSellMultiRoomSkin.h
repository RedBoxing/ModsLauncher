#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemSellMultiRoomSkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemSellMultiRoomSkin"));
	}

	template <typename T = uintptr_t> T& exclamationMark() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& window() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemSellMultiRoomSkin*))(Il2CppBase() + 0x1CDE1C0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ItemSellMultiRoomSkin*))(Il2CppBase() + 0x1CDE3B4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ItemSellMultiRoomSkin*))(Il2CppBase() + 0x1CDE4E0))(this);
	}
	template <typename T = void> T OnMultiRoomSkinUnlocked(uintptr_t e) {
		return ((T (*)(ItemSellMultiRoomSkin*, uintptr_t))(Il2CppBase() + 0x1CDE60C))(this, e);
	}
	template <typename T = void> T SwitchExclamationMark(bool show) {
		return ((T (*)(ItemSellMultiRoomSkin*, bool))(Il2CppBase() + 0x1CDE310))(this, show);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemSellMultiRoomSkin*, uintptr_t))(Il2CppBase() + 0x1CDE6F0))(this, controller);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ItemSellMultiRoomSkin*, uintptr_t))(Il2CppBase() + 0x1CDE800))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemSellMultiRoomSkin*, uintptr_t))(Il2CppBase() + 0x1CDE890))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ItemSellMultiRoomSkin*, uintptr_t))(Il2CppBase() + 0x1CDE898))(this, P0);
	}

};

}
