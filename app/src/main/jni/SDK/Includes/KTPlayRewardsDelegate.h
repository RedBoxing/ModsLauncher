#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayRewardsDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayRewardsDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t reward) {
		return ((T (*)(KTPlayRewardsDelegate*, uintptr_t))(Il2CppBase() + 0x21B3520))(this, reward);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t reward, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KTPlayRewardsDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x21B51F8))(this, reward, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KTPlayRewardsDelegate*, uintptr_t))(Il2CppBase() + 0x21B521C))(this, result);
	}

};

}
