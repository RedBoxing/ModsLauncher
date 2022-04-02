#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTUtil"));
	}

	template <typename T = bool> static T& inited() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x4256A74))(0);
	}
	template <typename T = void> static T Show() {
		return ((T (*)(void *))(Il2CppBase() + 0x4256B78))(0);
	}
	template <typename T = void> static T SetKtPlayMessageEnable(bool f_enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4256C10))(0, f_enable);
	}
	template <typename T = bool> static T TryHide() {
		return ((T (*)(void *))(Il2CppBase() + 0x4256CB4))(0);
	}

};

}
