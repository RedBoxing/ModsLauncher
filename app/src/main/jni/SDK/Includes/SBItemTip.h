#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBItemTip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBItemTip"));
	}

	template <typename T = Il2CppString*> T& tip_string() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SBItemTip*))(Il2CppBase() + 0x180A5D4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SBItemTip*, uintptr_t))(Il2CppBase() + 0x180A6C0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(SBItemTip*, uintptr_t))(Il2CppBase() + 0x180A9A8))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(SBItemTip*, uintptr_t))(Il2CppBase() + 0x180AB34))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(SBItemTip*))(Il2CppBase() + 0x180AC3C))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(SBItemTip*))(Il2CppBase() + 0x180AC9C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(SBItemTip*))(Il2CppBase() + 0x180AD28))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(SBItemTip*))(Il2CppBase() + 0x180AD88))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(SBItemTip*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x180ADE8))(this, controller, ext_info);
	}
	template <typename T = Il2CppString*> T GetTips() {
		return ((T (*)(SBItemTip*))(Il2CppBase() + 0x180A928))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SBItemTip*))(Il2CppBase() + 0x180AE60))(this);
	}

};

}
