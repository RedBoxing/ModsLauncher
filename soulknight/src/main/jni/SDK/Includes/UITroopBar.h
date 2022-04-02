#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITroopBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITroopBar"));
	}

	template <typename T = uintptr_t> T& armorSlider() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> static T CreateTroopBar(uintptr_t attribute) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41D6970))(0, attribute);
	}
	template <typename T = void> T UpdateHpBar(float value, float maxValue, bool forceShow) {
		return ((T (*)(UITroopBar*, float, float, bool))(Il2CppBase() + 0x41D6C38))(this, value, maxValue, forceShow);
	}
	template <typename T = void> T UpdateArmorBar(float value, float maxValue, bool forceShow) {
		return ((T (*)(UITroopBar*, float, float, bool))(Il2CppBase() + 0x41D6DB4))(this, value, maxValue, forceShow);
	}
	template <typename T = void> T SetWidth(int32_t width) {
		return ((T (*)(UITroopBar*, int32_t))(Il2CppBase() + 0x41D6ED0))(this, width);
	}
	template <typename T = void> T iFixBaseProxy_UpdateHpBar(float P0, float P1, bool P2) {
		return ((T (*)(UITroopBar*, float, float, bool))(Il2CppBase() + 0x41D7074))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_SetWidth(int32_t P0) {
		return ((T (*)(UITroopBar*, int32_t))(Il2CppBase() + 0x41D7080))(this, P0);
	}

};

}
