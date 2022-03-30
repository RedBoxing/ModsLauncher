#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FactorView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FactorView"));
	}

	template <typename T = uintptr_t> T& factorImg() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& arrowGo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& factor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ClickCallback() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& MaxWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(FactorView*))(Il2CppBase() + 0x4473F98))(this);
	}
	template <typename T = void> T ShowDesc() {
		return ((T (*)(FactorView*))(Il2CppBase() + 0x44740B8))(this);
	}
	template <typename T = void> T HideDesc() {
		return ((T (*)(FactorView*))(Il2CppBase() + 0x44741EC))(this);
	}
	template <typename T = void> T UpdateFactorImg(uintptr_t factor) {
		return ((T (*)(FactorView*, uintptr_t))(Il2CppBase() + 0x4474264))(this, factor);
	}
	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(FactorView*, uintptr_t))(Il2CppBase() + 0x4474638))(this, eventData);
	}

};

}
