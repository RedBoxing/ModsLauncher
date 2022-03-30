#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIMulMenu
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIMulMenu"));
	}

	template <typename T = uintptr_t> T& obj_btn_mul_skin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& obj_btn_mul_skill() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& multiInfos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& awake() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& hero_icon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ring_list() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& ring_index() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& hero_text() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ip_text() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& hero_level_bar() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& btn_yes() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& hero_index() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& hero_level() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& skin_index() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& skill_index() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& char_bar() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& skin_bar() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ring_bar() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& skill_bar() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& state() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& start_btn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434BAEC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434BF20))(this);
	}
	template <typename T = void> T LoadData() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434D0DC))(this);
	}
	template <typename T = void> T RequestData() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434D1B8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434D294))(this);
	}
	template <typename T = void> T OnBtnPlayerClick(int32_t value) {
		return ((T (*)(UIMulMenu*, int32_t))(Il2CppBase() + 0x434DCF4))(this, value);
	}
	template <typename T = void> T OnBtnCharSkinClick(int32_t value) {
		return ((T (*)(UIMulMenu*, int32_t))(Il2CppBase() + 0x434E48C))(this, value);
	}
	template <typename T = void> T OnBtnCharSkillClick(int32_t value) {
		return ((T (*)(UIMulMenu*, int32_t))(Il2CppBase() + 0x434E9A0))(this, value);
	}
	template <typename T = void> T OnBtnYesClick() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434D4E8))(this);
	}
	template <typename T = void> T OnBtnNoClick() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434E02C))(this);
	}
	template <typename T = void> T SetUpP1Info(int32_t index, int32_t level) {
		return ((T (*)(UIMulMenu*, int32_t, int32_t))(Il2CppBase() + 0x434CE14))(this, index, level);
	}
	template <typename T = void> T ShowTempMessage(Il2CppString* value, float e_time, bool isLocalized) {
		return ((T (*)(UIMulMenu*, Il2CppString*, float, bool))(Il2CppBase() + 0x434FFAC))(this, value, e_time, isLocalized);
	}
	template <typename T = void> T EndTempMessage() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x4350228))(this);
	}
	template <typename T = void> T OnBtnRingClick(int32_t index) {
		return ((T (*)(UIMulMenu*, int32_t))(Il2CppBase() + 0x434F518))(this, index);
	}
	template <typename T = void> T RingStart() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434C60C))(this);
	}
	template <typename T = void> T RemoveSkinBarBtn() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434F39C))(this);
	}
	template <typename T = void> T RemoveSkillBarBtn() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434FE30))(this);
	}
	template <typename T = void> T UpdateSkinBarBtn() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434EDF0))(this);
	}
	template <typename T = void> T UpdateSkillBarBtn() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x434F8BC))(this);
	}
	template <typename T = void> T OnBtnCharSkinClickX(uintptr_t f_btn_obj) {
		return ((T (*)(UIMulMenu*, uintptr_t))(Il2CppBase() + 0x4350344))(this, f_btn_obj);
	}
	template <typename T = void> T SetUpInfo(int32_t index, uintptr_t controller) {
		return ((T (*)(UIMulMenu*, int32_t, uintptr_t))(Il2CppBase() + 0x4350440))(this, index, controller);
	}
	template <typename T = void> T OnBtnStartClick() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x4350C8C))(this);
	}
	template <typename T = void> T MirrorProcessed() {
		return ((T (*)(UIMulMenu*))(Il2CppBase() + 0x4350D78))(this);
	}

};

}
