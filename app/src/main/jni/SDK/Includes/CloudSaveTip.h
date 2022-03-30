#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CloudSaveTip
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CloudSaveTip"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CloudSaveTip*))(Il2CppBase() + 0x206DC38))(this);
	}
	template <typename T = void> T CloudSaveFingerTip() {
		return ((T (*)(CloudSaveTip*))(Il2CppBase() + 0x206DD94))(this);
	}
	template <typename T = bool> T CheckTip() {
		return ((T (*)(CloudSaveTip*))(Il2CppBase() + 0x206DD2C))(this);
	}

};

}
