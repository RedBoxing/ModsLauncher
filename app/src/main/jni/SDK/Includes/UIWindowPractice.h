#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowPractice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowPractice"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& player_sprite_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buff_sprite_list() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& btn_clip() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& winodw_pause() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& img_buff_list() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& img_player() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& img_weapon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& buff_index_list() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& this_player_index() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& this_weapon_index() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowPractice*))(Il2CppBase() + 0x4318D18))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIWindowPractice*))(Il2CppBase() + 0x4318F90))(this);
	}
	template <typename T = void> T ShowWinodw() {
		return ((T (*)(UIWindowPractice*))(Il2CppBase() + 0x4319028))(this);
	}
	template <typename T = void> T BtnBuffClick(int32_t index) {
		return ((T (*)(UIWindowPractice*, int32_t))(Il2CppBase() + 0x43190E8))(this, index);
	}
	template <typename T = void> T BtnHomeClick() {
		return ((T (*)(UIWindowPractice*))(Il2CppBase() + 0x4319378))(this);
	}
	template <typename T = void> T BtnContinueClick() {
		return ((T (*)(UIWindowPractice*))(Il2CppBase() + 0x4319470))(this);
	}
	template <typename T = void> T BtnPlayerClick(int32_t value) {
		return ((T (*)(UIWindowPractice*, int32_t))(Il2CppBase() + 0x43196B8))(this, value);
	}
	template <typename T = void> T BtnWeaponClick(int32_t value) {
		return ((T (*)(UIWindowPractice*, int32_t))(Il2CppBase() + 0x43197C4))(this, value);
	}

};

}
