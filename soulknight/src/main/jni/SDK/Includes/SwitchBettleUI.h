#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchBettleUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchBettleUI"));
	}

	template <typename T = uintptr_t> T& att() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& attItem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& topLayout() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& horizontalLayout() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& atkKeyTip() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& skillKeyTip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& weaponKeyTip() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& specialKeyTip() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& btnSpecial() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& special() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& fusion() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& weapon_consume() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& weapon_icon() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& weapon_item_image() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& skillHorizontal() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& skill_icon_mask() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& skill_mask_ready() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& text_skill_count() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& image_skill_count() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& atk() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& isAtk() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& atkTweener() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& FlushIconTweener() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(SwitchBettleUI*))(Il2CppBase() + 0x18BEB4C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SwitchBettleUI*))(Il2CppBase() + 0x18BEBA8))(this);
	}
	template <typename T = void> T SwitchAtkBtn(bool is_atk) {
		return ((T (*)(SwitchBettleUI*, bool))(Il2CppBase() + 0x18BEC04))(this, is_atk);
	}
	template <typename T = void> T ShowSkillConsume(bool show) {
		return ((T (*)(SwitchBettleUI*, bool))(Il2CppBase() + 0x18BED90))(this, show);
	}
	template <typename T = void> T FlushIcon(uintptr_t weapon_item) {
		return ((T (*)(SwitchBettleUI*, uintptr_t))(Il2CppBase() + 0x18BEED8))(this, weapon_item);
	}
	template <typename T = uintptr_t> T RebuildLayout() {
		return ((T (*)(SwitchBettleUI*))(Il2CppBase() + 0x18BF100))(this);
	}

};

}
