#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkinUnlockCondition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkinUnlockCondition"));
	}

	template <typename T = uintptr_t> T& hero() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& skinIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T IsValid() {
		return ((T (*)(SkinUnlockCondition*))(Il2CppBase() + 0x41F6360))(this);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid() {
		return ((T (*)(SkinUnlockCondition*))(Il2CppBase() + 0x41F63F4))(this);
	}

};

}
