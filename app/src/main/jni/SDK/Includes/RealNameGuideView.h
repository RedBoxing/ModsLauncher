#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RealNameGuideView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealNameGuideView"));
	}

	template <typename T = uintptr_t> T& ConfirmBtn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ContentText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> static T& NeedAlwaysGuide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T get_ConfirmRealNameGuide() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DE09C))(0);
	}
	template <typename T = void> static T set_ConfirmRealNameGuide(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x44DE134))(0, value);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(RealNameGuideView*))(Il2CppBase() + 0x44DE1C8))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(RealNameGuideView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44DE364))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(RealNameGuideView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44DE460))(this, objects);
	}
	template <typename T = uintptr_t> static T ShowGuideView() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DE540))(0);
	}
	template <typename T = void> T InitViewb__6_0() {
		return ((T (*)(RealNameGuideView*))(Il2CppBase() + 0x44DE670))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(RealNameGuideView*))(Il2CppBase() + 0x44DE798))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(RealNameGuideView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44DE7A0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(RealNameGuideView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44DE7A8))(this, P0);
	}

};

}
