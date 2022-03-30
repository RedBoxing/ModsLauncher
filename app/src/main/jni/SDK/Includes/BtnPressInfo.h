#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BtnPressInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BtnPressInfo"));
	}

	template <typename T = uintptr_t> T& info() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BtnPressInfo*))(Il2CppBase() + 0x20A3AE4))(this);
	}
	template <typename T = void> T OnPointerDown(uintptr_t evenData) {
		return ((T (*)(BtnPressInfo*, uintptr_t))(Il2CppBase() + 0x20A3B98))(this, evenData);
	}
	template <typename T = void> T HideInfo() {
		return ((T (*)(BtnPressInfo*))(Il2CppBase() + 0x20A3C88))(this);
	}

};

}
