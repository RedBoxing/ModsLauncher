#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossShowUpProcess {

class ShowUpMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossShowUpProcess", "ShowUpMask"));
	}

	template <typename T = uintptr_t> T& _maskInstance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _uiScreenMask() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& animDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T ShowMask() {
		return ((T (*)(ShowUpMask*))(Il2CppBase() + 0x1B8200C))(this);
	}
	template <typename T = void> T HideMask() {
		return ((T (*)(ShowUpMask*))(Il2CppBase() + 0x1B820B4))(this);
	}
	template <typename T = void> T HideMaskb__5_0() {
		return ((T (*)(ShowUpMask*))(Il2CppBase() + 0x1B83440))(this);
	}

};

}
