#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CageItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CageItem"));
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
	template <typename T = uintptr_t> T& something() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& effect() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& show_pos() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& fx_cage_broken() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& talk_comp() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mercenary_distributions() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& trainer_distributions() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mount_distributions() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& other_npc_distributions() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& npc_root() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& the_npc() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& npc_proto() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppString*> T& target_room_name() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x1866204))(this);
	}
	template <typename T = void> T AddEvent() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x18664E8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x1866650))(this);
	}
	template <typename T = void> T OnRoomClear(uintptr_t e) {
		return ((T (*)(CageItem*, uintptr_t))(Il2CppBase() + 0x1866734))(this, e);
	}
	template <typename T = void> T ShowBrokenEffect() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x1866878))(this);
	}
	template <typename T = void> T ChangeState(bool broken) {
		return ((T (*)(CageItem*, bool))(Il2CppBase() + 0x1866408))(this, broken);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(CageItem*, uintptr_t))(Il2CppBase() + 0x18669B8))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(CageItem*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1866C64))(this, controller, ext_info);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(CageItem*, uintptr_t))(Il2CppBase() + 0x1866CF0))(this, controller);
	}
	template <typename T = void> T AfterCreateNpc() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x1867158))(this);
	}
	template <typename T = void> T CreateNpc(int32_t rnd) {
		return ((T (*)(CageItem*, int32_t))(Il2CppBase() + 0x1866E00))(this, rnd);
	}
	template <typename T = uintptr_t> T UnlockCage() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x1867260))(this);
	}
	template <typename T = void> T ShowNpc() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x1867340))(this);
	}
	template <typename T = void> T CreateExplosion() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x1867548))(this);
	}
	template <typename T = void> T ShowBrokenEffectb__20_0() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x18677BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(CageItem*))(Il2CppBase() + 0x186784C))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(CageItem*, uintptr_t))(Il2CppBase() + 0x1867854))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(CageItem*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x186785C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(CageItem*, uintptr_t))(Il2CppBase() + 0x1867864))(this, P0);
	}

};

}
