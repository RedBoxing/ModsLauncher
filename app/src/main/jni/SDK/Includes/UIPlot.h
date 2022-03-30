#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIPlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIPlot"));
	}

	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& can_click() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& img_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bg_img() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& mubu() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& text_info() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& skip() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x423777C))(this);
	}
	template <typename T = void> T ShowText() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x4237A4C))(this);
	}
	template <typename T = void> T BtnClick() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x4237B3C))(this);
	}
	template <typename T = void> T Tap1() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x4237BB0))(this);
	}
	template <typename T = void> T DoTap1() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x4237C8C))(this);
	}
	template <typename T = void> T Tap2() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x4237DE4))(this);
	}
	template <typename T = void> T DoTap2() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x4237EC0))(this);
	}
	template <typename T = void> T Tap3() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x4237FF0))(this);
	}
	template <typename T = void> T BtnSkipClick() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x42380E8))(this);
	}
	template <typename T = uintptr_t> T SkipPlot() {
		return ((T (*)(UIPlot*))(Il2CppBase() + 0x4238158))(this);
	}

};

}
