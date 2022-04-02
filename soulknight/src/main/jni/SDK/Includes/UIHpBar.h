#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIHpBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHpBar"));
	}

	template <typename T = uintptr_t> T& slider() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& blue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& red() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& green() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& gray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> static T CreatePetBar(uintptr_t attribute) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43379E8))(0, attribute);
	}
	template <typename T = uintptr_t> static T CreatePetBarWithOffset(uintptr_t attribute, Il2CppVector3 offset) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4337C64))(0, attribute, offset);
	}
	template <typename T = void> T UpdateHpBar(float value, float maxValue, bool forceShow) {
		return ((T (*)(UIHpBar*, float, float, bool))(Il2CppBase() + 0x4337E04))(this, value, maxValue, forceShow);
	}
	template <typename T = uintptr_t> static T CreateArmorBar(uintptr_t attribute) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4337F80))(0, attribute);
	}
	template <typename T = void> T SetWidth(int32_t width) {
		return ((T (*)(UIHpBar*, int32_t))(Il2CppBase() + 0x43381F0))(this, width);
	}
	template <typename T = void> T TurnColor(uintptr_t color) {
		return ((T (*)(UIHpBar*, uintptr_t))(Il2CppBase() + 0x433831C))(this, color);
	}

};

}
