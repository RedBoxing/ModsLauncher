#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwExhibitionAchievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwExhibitionAchievement"));
	}

	template <typename T = uintptr_t> T& object_icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& object_name() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& object_info() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& info1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& info2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& info3() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& info4() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> static T& NO_AWARD_BG_H() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HAS_AWARD_BG_H() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& bg2_img() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& lab_titl() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& lab_condition() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& img_icon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& award_obj() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& btn_award() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& btn_text() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& lab_award() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& award_grid_tf() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& seed_item_render() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& mat_item_render() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& bp_item_render() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& desc_obj() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& lab_desc() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& tmp_achievement_info() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& _name() {
		return *(T*)((uintptr_t)this + 0xF0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodwExhibitionAchievement*))(Il2CppBase() + 0x45C65E0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWinodwExhibitionAchievement*))(Il2CppBase() + 0x45C6AFC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWinodwExhibitionAchievement*))(Il2CppBase() + 0x45C6B58))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWinodwExhibitionAchievement*))(Il2CppBase() + 0x45C6BB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodwExhibitionAchievement*))(Il2CppBase() + 0x45C6CB8))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t achievement_info) {
		return ((T (*)(UIWinodwExhibitionAchievement*, uintptr_t))(Il2CppBase() + 0x45C6FEC))(this, achievement_info);
	}
	template <typename T = void> T ShowAwards(uintptr_t achievement_info) {
		return ((T (*)(UIWinodwExhibitionAchievement*, uintptr_t))(Il2CppBase() + 0x45C743C))(this, achievement_info);
	}
	template <typename T = void> T FlashAwardDesc(uintptr_t info) {
		return ((T (*)(UIWinodwExhibitionAchievement*, uintptr_t))(Il2CppBase() + 0x45C888C))(this, info);
	}
	template <typename T = void> T AwardBtnClick() {
		return ((T (*)(UIWinodwExhibitionAchievement*))(Il2CppBase() + 0x45C8BC4))(this);
	}
	template <typename T = void> T ShowGetUI(uintptr_t award_gameobject, int32_t count) {
		return ((T (*)(UIWinodwExhibitionAchievement*, uintptr_t, int32_t))(Il2CppBase() + 0x45C93C0))(this, award_gameobject, count);
	}
	template <typename T = Il2CppString*> T GetItemName(uintptr_t pickable, uintptr_t item_obj, int32_t count) {
		return ((T (*)(UIWinodwExhibitionAchievement*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x45C970C))(this, pickable, item_obj, count);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWinodwExhibitionAchievement*))(Il2CppBase() + 0x45C6DD4))(this);
	}

};

}
