#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyCopyTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyCopyTag"));
	}

	template <typename T = int32_t> T& CopyTimes() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_CopyTimes() {
		return ((T (*)(EnemyCopyTag*))(Il2CppBase() + 0x4280894))(this);
	}
	template <typename T = void> T set_CopyTimes(int32_t value) {
		return ((T (*)(EnemyCopyTag*, int32_t))(Il2CppBase() + 0x428089C))(this, value);
	}

};

}
