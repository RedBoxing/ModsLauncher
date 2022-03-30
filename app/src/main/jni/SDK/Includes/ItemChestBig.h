#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemChestBig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemChestBig"));
	}

	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& boss_objs() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& onEmptyChestOpen() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& finalLevel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& items() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& _isEmptyChest() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& given_objs() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A58298))(this);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ItemChestBig*, uintptr_t))(Il2CppBase() + 0x1A58490))(this, controller);
	}
	template <typename T = void> T OpenChest() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A58514))(this);
	}
	template <typename T = void> T GetRandomWeapon() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A59298))(this);
	}
	template <typename T = void> T CreateSpecialAward() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A58CB0))(this);
	}
	template <typename T = bool> T MelleValid() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A59690))(this);
	}
	template <typename T = void> T CreateGivenObj() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A589B0))(this);
	}
	template <typename T = void> T OnReady() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A5982C))(this);
	}
	template <typename T = void> T SetChestEmpty() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A598B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ItemChestBig*, uintptr_t))(Il2CppBase() + 0x1A599D8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnReady() {
		return ((T (*)(ItemChestBig*))(Il2CppBase() + 0x1A599E0))(this);
	}

};

}
