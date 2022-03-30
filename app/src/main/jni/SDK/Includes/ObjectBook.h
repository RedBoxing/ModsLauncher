#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectBook
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectBook"));
	}

	template <typename T = uintptr_t> T& ui_window() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& stick() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& updateSpriteRenderer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& the_window() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& max_level() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& gem_list() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& info_list() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& this_level() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D48EAC))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectBook*, uintptr_t))(Il2CppBase() + 0x1D492D0))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectBook*, uintptr_t))(Il2CppBase() + 0x1D494A8))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectBook*, uintptr_t))(Il2CppBase() + 0x1D49634))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D49B0C))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D49B6C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D49BF8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D49C58))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectBook*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D49CB8))(this, controller, ext_info);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D49D30))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D49F90))(this);
	}
	template <typename T = void> T DestroyWindow() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D4A028))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D4A19C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ObjectBook*, uintptr_t))(Il2CppBase() + 0x1D4A1A4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectBook*, uintptr_t))(Il2CppBase() + 0x1D4A1AC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectBook*, uintptr_t))(Il2CppBase() + 0x1D4A1B4))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D4A1BC))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D4A1C4))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D4A1CC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectBook*))(Il2CppBase() + 0x1D4A1D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(ObjectBook*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D4A1DC))(this, P0, P1);
	}

};

}
