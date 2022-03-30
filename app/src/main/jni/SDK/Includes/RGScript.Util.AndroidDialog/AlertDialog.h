#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util.AndroidDialog {

class AlertDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util.AndroidDialog", "AlertDialog"));
	}

	template <typename T = void*> T& isPositiveButtonSet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& isNegativeButtonSet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& dialog() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& BUTTON_POSITIVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BUTTON_NEGATIVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BUTTON_NEUTRAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_isShowing() {
		return ((T (*)(AlertDialog*))(Il2CppBase() + 0x454D368))(this);
	}
	template <typename T = void> T dismiss() {
		return ((T (*)(AlertDialog*))(Il2CppBase() + 0x454D478))(this);
	}
	template <typename T = void> T setPositiveBtnClick(uintptr_t viewOnClickListener) {
		return ((T (*)(AlertDialog*, uintptr_t))(Il2CppBase() + 0x454D534))(this, viewOnClickListener);
	}
	template <typename T = void> T setNegativeBtnClick(uintptr_t viewOnClickListener) {
		return ((T (*)(AlertDialog*, uintptr_t))(Il2CppBase() + 0x454D768))(this, viewOnClickListener);
	}
	template <typename T = uintptr_t> T show() {
		return ((T (*)(AlertDialog*))(Il2CppBase() + 0x454D99C))(this);
	}

};

}
