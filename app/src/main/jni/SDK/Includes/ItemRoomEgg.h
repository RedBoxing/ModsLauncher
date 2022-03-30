#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemRoomEgg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemRoomEgg"));
	}

	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& gem_obj() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& boom_obj() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pot_objs() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& rewardDistribution() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDB140))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemRoomEgg*, uintptr_t))(Il2CppBase() + 0x1CDB288))(this, controller);
	}
	template <typename T = uintptr_t> T CreateObject(uintptr_t controller) {
		return ((T (*)(ItemRoomEgg*, uintptr_t))(Il2CppBase() + 0x1CDB4B4))(this, controller);
	}
	template <typename T = void> T CreateWeapon() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDB5A8))(this);
	}
	template <typename T = void> T CreateGem(int32_t index) {
		return ((T (*)(ItemRoomEgg*, int32_t))(Il2CppBase() + 0x1CDB830))(this, index);
	}
	template <typename T = void> T CreateBoom() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDBB6C))(this);
	}
	template <typename T = void> T CreatePots() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDBD80))(this);
	}
	template <typename T = void> T CreatePickable() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDBFE8))(this);
	}
	template <typename T = void> T CreateObjectb__11_0() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDC2CC))(this);
	}
	template <typename T = void> T CreateObjectb__11_1() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDC2D4))(this);
	}
	template <typename T = void> T CreateObjectb__11_2() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDC2DC))(this);
	}
	template <typename T = void> T CreateObjectb__11_3() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDC2E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ItemRoomEgg*))(Il2CppBase() + 0x1CDC2EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemRoomEgg*, uintptr_t))(Il2CppBase() + 0x1CDC2F4))(this, P0);
	}

};

}
