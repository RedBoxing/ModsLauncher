#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowShareUnlockSkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowShareUnlockSkin"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sprite_info_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& sprite_info_en() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& title_cn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& title_en() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& img_info() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& img_title() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& text_share_btn() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& btn_share() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& info_index() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& e_index() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& unlock_char_index() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& unlock_skin_index() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& tip() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& is_cn() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowShareUnlockSkin*))(Il2CppBase() + 0x432C0C8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowShareUnlockSkin*))(Il2CppBase() + 0x432C2AC))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWindowShareUnlockSkin*))(Il2CppBase() + 0x432C558))(this);
	}
	template <typename T = void> T BtnCloseClick() {
		return ((T (*)(UIWindowShareUnlockSkin*))(Il2CppBase() + 0x432C3C8))(this);
	}
	template <typename T = void> T BtnShareClick() {
		return ((T (*)(UIWindowShareUnlockSkin*))(Il2CppBase() + 0x432C8C0))(this);
	}
	template <typename T = uintptr_t> T CaptureCamera() {
		return ((T (*)(UIWindowShareUnlockSkin*))(Il2CppBase() + 0x432C97C))(this);
	}
	template <typename T = void> T UnLockSkin() {
		return ((T (*)(UIWindowShareUnlockSkin*))(Il2CppBase() + 0x432CA5C))(this);
	}

};

}
