#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowExhibitionSkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowExhibitionSkin"));
	}

	template <typename T = uintptr_t> T& txName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& txAuthor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& txPassTimes() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& imIcon() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowExhibitionSkin*))(Il2CppBase() + 0x4596058))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowExhibitionSkin*))(Il2CppBase() + 0x459623C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowExhibitionSkin*))(Il2CppBase() + 0x4596298))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowExhibitionSkin*))(Il2CppBase() + 0x45962F4))(this);
	}
	template <typename T = void> static T ShowWindow(uintptr_t icon, Il2CppString* name, Il2CppString* author, int32_t passTime, bool unlock) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x4596628))(0, icon, name, author, passTime, unlock);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWindowExhibitionSkin*))(Il2CppBase() + 0x4596410))(this);
	}

};

}
