#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowFurniture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowFurniture"));
	}

	template <typename T = uintptr_t> T& img_object() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& text_title() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& text_info() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& text_btn1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& text_btn2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& text_gems() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& the_mission() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& consume() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& levelup_clip() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowFurniture*))(Il2CppBase() + 0x4596C8C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowFurniture*))(Il2CppBase() + 0x4596F0C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowFurniture*))(Il2CppBase() + 0x4596F68))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowFurniture*))(Il2CppBase() + 0x4596FC4))(this);
	}
	template <typename T = void> T ShowWindow() {
		return ((T (*)(UIWindowFurniture*))(Il2CppBase() + 0x45975C8))(this);
	}
	template <typename T = void> T HideWindow() {
		return ((T (*)(UIWindowFurniture*))(Il2CppBase() + 0x45977C0))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t value1, Il2CppString* value2, Il2CppString* value3, Il2CppString* value4, int32_t value5, uintptr_t value6) {
		return ((T (*)(UIWindowFurniture*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, int32_t, uintptr_t))(Il2CppBase() + 0x4597958))(this, value1, value2, value3, value4, value5, value6);
	}
	template <typename T = void> T SetInfo_1(uintptr_t value1, Il2CppString* value2, Il2CppString* value3, uintptr_t value6) {
		return ((T (*)(UIWindowFurniture*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4597B24))(this, value1, value2, value3, value6);
	}
	template <typename T = void> T BtnYesClick() {
		return ((T (*)(UIWindowFurniture*))(Il2CppBase() + 0x4597350))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWindowFurniture*))(Il2CppBase() + 0x45970E0))(this);
	}

};

}
