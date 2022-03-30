#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectFridge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectFridge"));
	}

	template <typename T = uintptr_t> T& openRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& closeRoot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& open() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectFridge*, uintptr_t))(Il2CppBase() + 0x1D5DAD4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectFridge*, uintptr_t))(Il2CppBase() + 0x1D5DCAC))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectFridge*, uintptr_t))(Il2CppBase() + 0x1D5DE38))(this, controller);
	}
	template <typename T = void> T AddLevel() {
		return ((T (*)(ObjectFridge*))(Il2CppBase() + 0x1D5DFA8))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectFridge*))(Il2CppBase() + 0x1D5E0E0))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectFridge*))(Il2CppBase() + 0x1D5E140))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectFridge*))(Il2CppBase() + 0x1D5E1CC))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectFridge*))(Il2CppBase() + 0x1D5E22C))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectFridge*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D5E28C))(this, controller, ext_info);
	}

};

}
