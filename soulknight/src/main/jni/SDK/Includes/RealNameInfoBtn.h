#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RealNameInfoBtn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealNameInfoBtn"));
	}

	template <typename T = uintptr_t> T& InfoBtn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ResetTimeText() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RealNameInfoBtn*))(Il2CppBase() + 0x44DE7B0))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(RealNameInfoBtn*))(Il2CppBase() + 0x44DE860))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RealNameInfoBtn*))(Il2CppBase() + 0x44DEC30))(this);
	}
	template <typename T = void> T RefreshTimeText(bool forceRefresh) {
		return ((T (*)(RealNameInfoBtn*, bool))(Il2CppBase() + 0x44DE9D8))(this, forceRefresh);
	}
	template <typename T = void> T ClickRealNameInfoBtn() {
		return ((T (*)(RealNameInfoBtn*))(Il2CppBase() + 0x44DEC94))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(RealNameInfoBtn*))(Il2CppBase() + 0x44DED54))(this);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(RealNameInfoBtn*))(Il2CppBase() + 0x44DED5C))(this);
	}

};

}
