#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIItemInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIItemInfo"));
	}

	template <typename T = uintptr_t> T& weaponInfoIcon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& large_font_size() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& small_font_size() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& backgrounds() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& imBackgroud() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& img_list() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& text_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& long_text() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& custom_icon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& weapon_type_list() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIItemInfo*))(Il2CppBase() + 0x4338B30))(this);
	}
	template <typename T = void> T SetItemInfo(Il2CppArray<uintptr_t>* icons, Il2CppArray<uintptr_t>* values, int32_t bgIndex, uintptr_t customIcon) {
		return ((T (*)(UIItemInfo*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x4338F40))(this, icons, values, bgIndex, customIcon);
	}
	template <typename T = void> T SetItemInfo_1(Il2CppString* desc, int32_t bgIndex) {
		return ((T (*)(UIItemInfo*, Il2CppString*, int32_t))(Il2CppBase() + 0x43396CC))(this, desc, bgIndex);
	}
	template <typename T = void> T SetItemInfo_2(Il2CppArray<uintptr_t>* sprites) {
		return ((T (*)(UIItemInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x433996C))(this, sprites);
	}
	template <typename T = void> T RefreshBackgroud(int32_t bgIndex) {
		return ((T (*)(UIItemInfo*, int32_t))(Il2CppBase() + 0x43395A0))(this, bgIndex);
	}

};

}
