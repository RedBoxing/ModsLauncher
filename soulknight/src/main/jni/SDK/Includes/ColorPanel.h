#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ColorPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColorPanel"));
	}

	template <typename T = uintptr_t> T& weaponProto() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& baseGrid() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extraGrid() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& windowSandbox() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& colorButtonProto() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& butttons() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ColorPanel*))(Il2CppBase() + 0x2070ED8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ColorPanel*))(Il2CppBase() + 0x2071234))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ColorPanel*))(Il2CppBase() + 0x2071290))(this);
	}
	template <typename T = void> T SetupNavigation() {
		return ((T (*)(ColorPanel*))(Il2CppBase() + 0x20712EC))(this);
	}
	template <typename T = uintptr_t> T NavigationCoroutine() {
		return ((T (*)(ColorPanel*))(Il2CppBase() + 0x2071548))(this);
	}
	template <typename T = void> T CreatePanel() {
		return ((T (*)(ColorPanel*))(Il2CppBase() + 0x2071018))(this);
	}
	template <typename T = void> T RegisterRecentColor(uintptr_t newColor) {
		return ((T (*)(ColorPanel*, uintptr_t))(Il2CppBase() + 0x2071C44))(this, newColor);
	}
	template <typename T = void> T CreateColorButton(uintptr_t selectedColor) {
		return ((T (*)(ColorPanel*, uintptr_t))(Il2CppBase() + 0x2071628))(this, selectedColor);
	}
	template <typename T = void> T CreateExtraColorButton(uintptr_t selectedColor) {
		return ((T (*)(ColorPanel*, uintptr_t))(Il2CppBase() + 0x20718CC))(this, selectedColor);
	}
	template <typename T = void> T OnClick_CustomColor() {
		return ((T (*)(ColorPanel*))(Il2CppBase() + 0x2071E74))(this);
	}

};

}
