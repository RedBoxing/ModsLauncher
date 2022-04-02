#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectCatFood
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectCatFood"));
	}

	template <typename T = uintptr_t> T& ui_window() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& the_window() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& max_level() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& info_list() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& gem_list() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& this_level() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D4F6E4))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectCatFood*, uintptr_t))(Il2CppBase() + 0x1D4FE34))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectCatFood*, uintptr_t))(Il2CppBase() + 0x1D5000C))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectCatFood*, uintptr_t))(Il2CppBase() + 0x1D50198))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50574))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D505D4))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50660))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D506C0))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectCatFood*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D50720))(this, controller, ext_info);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50798))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50A0C))(this);
	}
	template <typename T = void> T DestroyWindow() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50AA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50C1C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ObjectCatFood*, uintptr_t))(Il2CppBase() + 0x1D50C24))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectCatFood*, uintptr_t))(Il2CppBase() + 0x1D50C2C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectCatFood*, uintptr_t))(Il2CppBase() + 0x1D50C34))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50C3C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50C44))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50C4C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectCatFood*))(Il2CppBase() + 0x1D50C54))(this);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(ObjectCatFood*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D50C5C))(this, P0, P1);
	}

};

}
