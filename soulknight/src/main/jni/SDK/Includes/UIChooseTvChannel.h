#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIChooseTvChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIChooseTvChannel"));
	}

	template <typename T = uintptr_t> T& tv() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_pauseWhenShow() {
		return ((T (*)(UIChooseTvChannel*))(Il2CppBase() + 0x41B5D2C))(this);
	}
	template <typename T = uintptr_t> static T ShowWindow(uintptr_t parent, uintptr_t tv, bool hasCoinAds, bool hasChillyTv) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x41B5D8C))(0, parent, tv, hasCoinAds, hasChillyTv);
	}
	template <typename T = void> T OnClickAds() {
		return ((T (*)(UIChooseTvChannel*))(Il2CppBase() + 0x41B6248))(this);
	}
	template <typename T = bool> static T get_showable() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B62CC))(0);
	}
	template <typename T = void> T OnClickChillyTv() {
		return ((T (*)(UIChooseTvChannel*))(Il2CppBase() + 0x41B6400))(this);
	}
	template <typename T = void> static T ShowChillyTvProgram() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B6064))(0);
	}
	template <typename T = void> static T StatisticShow(uintptr_t configItem) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41B646C))(0, configItem);
	}
	template <typename T = bool> T iFixBaseProxy_get_pauseWhenShow() {
		return ((T (*)(UIChooseTvChannel*))(Il2CppBase() + 0x41B6644))(this);
	}

};

}
