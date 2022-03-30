#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectFishBowl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectFishBowl"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& gem_list() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& info_list() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& this_level() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& drop_objects() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& canUse() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& drop_container() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& the_fish_state() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& find_fish() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& fish_jump() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& onCreateFishWeapon() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& play_catch_fish() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& catch_fish_state() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& catch_fish_rnd() {
		return *(T*)((uintptr_t)this + 0x108);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D57E14))(this);
	}
	template <typename T = void> T FlushFishRootState() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D58158))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D58374))(this);
	}
	template <typename T = void> T NoFishWeapon() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D58404))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectFishBowl*, uintptr_t))(Il2CppBase() + 0x1D58464))(this, controller);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D58D68))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D58DC8))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D58E28))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectFishBowl*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D58E88))(this, controller, ext_info);
	}
	template <typename T = void> T BtnClick1() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D58F00))(this);
	}
	template <typename T = void> T BtnClick2() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D59198))(this);
	}
	template <typename T = void> T DestroyWindow() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D59230))(this);
	}
	template <typename T = void> T TestDrop() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D59304))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D59600))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D59608))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectFishBowl*, uintptr_t))(Il2CppBase() + 0x1D59610))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemValue() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D59618))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetItemLevel() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D59620))(this);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectFishBowl*))(Il2CppBase() + 0x1D59628))(this);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(ObjectFishBowl*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D59630))(this, P0, P1);
	}

};

}
