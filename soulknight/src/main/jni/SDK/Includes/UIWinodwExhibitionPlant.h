#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwExhibitionPlant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwExhibitionPlant"));
	}

	template <typename T = uintptr_t> T& imType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& object_icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& txType() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& txGrow() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& txGet() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& object_name() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& goOneshot() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& goRepeat() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodwExhibitionPlant*))(Il2CppBase() + 0x45C97DC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWinodwExhibitionPlant*))(Il2CppBase() + 0x45C9B08))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWinodwExhibitionPlant*))(Il2CppBase() + 0x45C9B64))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t plant, bool show_info) {
		return ((T (*)(UIWinodwExhibitionPlant*, uintptr_t, bool))(Il2CppBase() + 0x45C9BC0))(this, plant, show_info);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWinodwExhibitionPlant*))(Il2CppBase() + 0x45CA55C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodwExhibitionPlant*))(Il2CppBase() + 0x45CA774))(this);
	}

};

}
