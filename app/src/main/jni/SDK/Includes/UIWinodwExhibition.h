#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWinodwExhibition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWinodwExhibition"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& star_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& object_icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& object_name() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& object_info() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWinodwExhibition*))(Il2CppBase() + 0x45C5B7C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWinodwExhibition*))(Il2CppBase() + 0x45C5E48))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWinodwExhibition*))(Il2CppBase() + 0x45C5EA4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWinodwExhibition*))(Il2CppBase() + 0x45C5F00))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t icon, Il2CppString* name, Il2CppString* info, int32_t level) {
		return ((T (*)(UIWinodwExhibition*, uintptr_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x45C6234))(this, icon, name, info, level);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWinodwExhibition*))(Il2CppBase() + 0x45C601C))(this);
	}

};

}
