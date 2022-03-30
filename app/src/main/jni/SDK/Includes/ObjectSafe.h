#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectSafe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectSafe"));
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
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& gem_list() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& info_list() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& this_level() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DBF5CC))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectSafe*, uintptr_t))(Il2CppBase() + 0x1DBF9D4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectSafe*, uintptr_t))(Il2CppBase() + 0x1DBFBAC))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectSafe*, uintptr_t))(Il2CppBase() + 0x1DBFD38))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC00E8))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC0148))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC01D4))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC0234))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectSafe*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DC0294))(this, controller, ext_info);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC030C))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC05BC))(this);
	}
	template <typename T = void> T DestroyWindow() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC0654))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC07C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ObjectSafe*, uintptr_t))(Il2CppBase() + 0x1DC07D0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectSafe*, uintptr_t))(Il2CppBase() + 0x1DC07D8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectSafe*, uintptr_t))(Il2CppBase() + 0x1DC07E0))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC07E8))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC07F0))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC07F8))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectSafe*))(Il2CppBase() + 0x1DC0800))(this);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(ObjectSafe*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DC0808))(this, P0, P1);
	}

};

}
