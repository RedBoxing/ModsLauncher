#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SeasonGuide
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeasonGuide"));
	}

	template <typename T = uintptr_t> static T& AfterReadGuide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T add_AfterReadGuide(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x181BBB0))(0, value);
	}
	template <typename T = void> static T remove_AfterReadGuide(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x181BCAC))(0, value);
	}
	template <typename T = bool> static T get_HasShowSeasonGuide() {
		return ((T (*)(void *))(Il2CppBase() + 0x181BDA8))(0);
	}
	template <typename T = void> static T set_HasShowSeasonGuide(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x181BEE8))(0, value);
	}
	template <typename T = void> static T ShowWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x181C024))(0);
	}

};

}
