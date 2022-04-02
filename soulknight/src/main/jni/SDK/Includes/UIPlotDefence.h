#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIPlotDefence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPlotDefence"));
	}

	template <typename T = Il2CppString*> static T& EventKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& image() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& btnPlot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& entered() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIPlotDefence*))(Il2CppBase() + 0x423840C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(UIPlotDefence*))(Il2CppBase() + 0x42385B4))(this);
	}
	template <typename T = uintptr_t> T PlayingPlot() {
		return ((T (*)(UIPlotDefence*))(Il2CppBase() + 0x4238748))(this);
	}
	template <typename T = uintptr_t> T EnterNextScene() {
		return ((T (*)(UIPlotDefence*))(Il2CppBase() + 0x4238828))(this);
	}
	template <typename T = void> T NextScene() {
		return ((T (*)(UIPlotDefence*))(Il2CppBase() + 0x4238908))(this);
	}
	template <typename T = void> T OnClick_Plot() {
		return ((T (*)(UIPlotDefence*))(Il2CppBase() + 0x42389CC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIPlotDefence*))(Il2CppBase() + 0x4238A3C))(this);
	}

};

}
