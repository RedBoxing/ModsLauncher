#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectPlant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectPlant"));
	}

	template <typename T = uintptr_t> T& img_1() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& img_2() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& img_0() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& spriteObject0() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& spriteObject1() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& spriteObject2() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ui_window() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& the_window() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& max_level() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& info_list() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& gem_list() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& this_level() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& _currentSprite() {
		return *(T*)((uintptr_t)this + 0xF8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DB97C8))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectPlant*, uintptr_t))(Il2CppBase() + 0x1DB9D0C))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectPlant*, uintptr_t))(Il2CppBase() + 0x1DB9EE4))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectPlant*, uintptr_t))(Il2CppBase() + 0x1DBA070))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBA41C))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBA47C))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBA508))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBA568))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectPlant*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DBA5C8))(this, controller, ext_info);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBA640))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBA9C0))(this);
	}
	template <typename T = void> T DestroyWindow() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBAA58))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBABCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ObjectPlant*, uintptr_t))(Il2CppBase() + 0x1DBABD4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectPlant*, uintptr_t))(Il2CppBase() + 0x1DBABDC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectPlant*, uintptr_t))(Il2CppBase() + 0x1DBABE4))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBABEC))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBABF4))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBABFC))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectPlant*))(Il2CppBase() + 0x1DBAC04))(this);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(ObjectPlant*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DBAC0C))(this, P0, P1);
	}

};

}
