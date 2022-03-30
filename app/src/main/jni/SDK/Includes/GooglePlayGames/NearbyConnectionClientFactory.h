#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames {

class NearbyConnectionClientFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames", "NearbyConnectionClientFactory"));
	}


	template <typename T = void> static T Create(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x460E8B0))(0, callback);
	}
	template <typename T = uintptr_t> static T ToStatus(uintptr_t status) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x460E9E4))(0, status);
	}

};

}
