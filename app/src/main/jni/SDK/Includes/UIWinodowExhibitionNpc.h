#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodowExhibitionNpc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodowExhibitionNpc"));
	}

	template <typename T = uintptr_t> T& object_icon() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& txGet() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& object_name() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& imTokenIcon() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& txPrice() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& txDesc() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& txHp() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodowExhibitionNpc*))(Il2CppBase() + 0x45C4EB0))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWinodowExhibitionNpc*))(Il2CppBase() + 0x45C5190))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWinodowExhibitionNpc*))(Il2CppBase() + 0x45C51EC))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t info, bool show_info) {
		return ((T (*)(UIWinodowExhibitionNpc*, uintptr_t, bool))(Il2CppBase() + 0x45C5248))(this, info, show_info);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWinodowExhibitionNpc*))(Il2CppBase() + 0x45C5840))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodowExhibitionNpc*))(Il2CppBase() + 0x45C5A58))(this);
	}

};

}
