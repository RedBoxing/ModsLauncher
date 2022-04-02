#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectPostman
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectPostman"));
	}

	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& importemt_tab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& spriteObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& award_clip() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& gems_icon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& packageProto() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& sprite_animation() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& sprite_animation_from_player() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& upgrade_sprites() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& upgrade_sprites_from_player() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& show_tab() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& specialReward() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& package() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& _isSkinFromPlayer() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = int32_t> T get_reward_value() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBB340))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBB41C))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ObjectPostman*, uintptr_t))(Il2CppBase() + 0x1DBB548))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectPostman*, uintptr_t))(Il2CppBase() + 0x1DBB734))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectPostman*, uintptr_t))(Il2CppBase() + 0x1DBB8F8))(this, controller);
	}
	template <typename T = void> T PostmanGone() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBBF1C))(this);
	}
	template <typename T = void> T ShowHostessTable() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBC218))(this);
	}
	template <typename T = void> T ShowHostess() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBC4B8))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBC6C4))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBC724))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBC7B0))(this);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBC810))(this);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(ObjectPostman*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1DBC870))(this, controller, ext_info);
	}
	template <typename T = bool> T NeedShow() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBC8E8))(this);
	}
	template <typename T = void> T GetReward() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBBCDC))(this);
	}
	template <typename T = void> T CreateDailyPackage() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBC9B8))(this);
	}
	template <typename T = void> T Upgrade() {
		return ((T (*)(ObjectPostman*))(Il2CppBase() + 0x1DBCBD0))(this);
	}

};

}
