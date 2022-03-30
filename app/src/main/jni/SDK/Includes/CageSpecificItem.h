#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CageSpecificItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CageSpecificItem"));
	}

	template <typename T = uintptr_t> T& broken_root() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& intact_root() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& explosion() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& fx_cage_broken() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& talk_comp() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& npc() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& onInstantiateNpc() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& npc_root() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& the_npc() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppString*> T& target_room_name() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CageSpecificItem*))(Il2CppBase() + 0x1867A20))(this);
	}
	template <typename T = void> T ShowBrokenEffect() {
		return ((T (*)(CageSpecificItem*))(Il2CppBase() + 0x1867C64))(this);
	}
	template <typename T = void> T ChangeState(bool broken) {
		return ((T (*)(CageSpecificItem*, bool))(Il2CppBase() + 0x1867B84))(this, broken);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(CageSpecificItem*, uintptr_t))(Il2CppBase() + 0x1867DA4))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(CageSpecificItem*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1868050))(this, controller, ext_info);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(CageSpecificItem*, uintptr_t))(Il2CppBase() + 0x18680DC))(this, controller);
	}
	template <typename T = void> T AfterCreateNpc() {
		return ((T (*)(CageSpecificItem*))(Il2CppBase() + 0x18682CC))(this);
	}
	template <typename T = void> T CreateNpc(int32_t rnd) {
		return ((T (*)(CageSpecificItem*, int32_t))(Il2CppBase() + 0x18681EC))(this, rnd);
	}
	template <typename T = uintptr_t> T UnlockCage() {
		return ((T (*)(CageSpecificItem*))(Il2CppBase() + 0x18683D4))(this);
	}
	template <typename T = void> T ShowNpc() {
		return ((T (*)(CageSpecificItem*))(Il2CppBase() + 0x18684B4))(this);
	}
	template <typename T = void> T CreateExplosion() {
		return ((T (*)(CageSpecificItem*))(Il2CppBase() + 0x18686AC))(this);
	}
	template <typename T = void> T ShowBrokenEffectb__12_0() {
		return ((T (*)(CageSpecificItem*))(Il2CppBase() + 0x18688E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(CageSpecificItem*))(Il2CppBase() + 0x1868970))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(CageSpecificItem*, uintptr_t))(Il2CppBase() + 0x1868978))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(CageSpecificItem*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1868980))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(CageSpecificItem*, uintptr_t))(Il2CppBase() + 0x1868988))(this, P0);
	}

};

}
