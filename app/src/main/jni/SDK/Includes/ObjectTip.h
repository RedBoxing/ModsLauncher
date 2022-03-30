#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectTip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectTip"));
	}

	template <typename T = Il2CppString*> T& tip_string() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectTip*, uintptr_t))(Il2CppBase() + 0x1DCC184))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectTip*, uintptr_t))(Il2CppBase() + 0x1DCC3F4))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectTip*, uintptr_t))(Il2CppBase() + 0x1DCC580))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectTip*))(Il2CppBase() + 0x1DCC5F0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectTip*))(Il2CppBase() + 0x1DCC650))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectTip*))(Il2CppBase() + 0x1DCC6DC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectTip*))(Il2CppBase() + 0x1DCC73C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectTip*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DCC79C))(this, controller, ext_info);
	}
	template <typename T = Il2CppString*> T GetTips() {
		return ((T (*)(ObjectTip*))(Il2CppBase() + 0x1DCC374))(this);
	}

};

}
