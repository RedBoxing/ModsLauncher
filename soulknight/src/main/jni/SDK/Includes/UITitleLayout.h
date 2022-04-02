#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITitleLayout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITitleLayout"));
	}

	template <typename T = bool> static T& openShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& rtCanvas() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rtButtonBar() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AgeBtn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& lastCanvasSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector2> T& btnBarShowOffsetMin() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& btnBarShowOffsetMax() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& btnBarHideOffsetMin() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector2> T& btnBarHideOffsetMax() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D4E3C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5114))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5224))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D594C))(this);
	}
	template <typename T = int32_t> T get_openTimes() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5A5C))(this);
	}
	template <typename T = void> T set_openTimes(int32_t value) {
		return ((T (*)(UITitleLayout*, int32_t))(Il2CppBase() + 0x41D5B24))(this, value);
	}
	template <typename T = void> T ShowPromotion() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5300))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5C08))(this);
	}
	template <typename T = void> T CheckButtonBar() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5C68))(this);
	}
	template <typename T = bool> T IsCanvasChanged() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5CE0))(this);
	}
	template <typename T = int32_t> T get_ButtonCount() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5F84))(this);
	}
	template <typename T = void> T RefreshSpacing() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D5E0C))(this);
	}
	template <typename T = void> T RefreshData(Il2CppString* oldAccountId, Il2CppString* newAccountId) {
		return ((T (*)(UITitleLayout*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x41D607C))(this, oldAccountId, newAccountId);
	}
	template <typename T = void> T ChangeBtnBars(Il2CppRect rect) {
		return ((T (*)(UITitleLayout*, Il2CppRect))(Il2CppBase() + 0x41D60F8))(this, rect);
	}
	template <typename T = void> T Awakeb__4_0() {
		return ((T (*)(UITitleLayout*))(Il2CppBase() + 0x41D65A4))(this);
	}

};

}
