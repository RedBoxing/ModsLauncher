#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UICountDownRealName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UICountDownRealName"));
	}

	template <typename T = bool> T& ShowWarnning() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& txTimer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NotVerifyTagGa() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UICountDownRealName*))(Il2CppBase() + 0x432F6D8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UICountDownRealName*))(Il2CppBase() + 0x432F864))(this);
	}
	template <typename T = uintptr_t> T RefreshingText() {
		return ((T (*)(UICountDownRealName*))(Il2CppBase() + 0x432F8D4))(this);
	}
	template <typename T = void> T RefreshText() {
		return ((T (*)(UICountDownRealName*))(Il2CppBase() + 0x432F9B4))(this);
	}

};

}
