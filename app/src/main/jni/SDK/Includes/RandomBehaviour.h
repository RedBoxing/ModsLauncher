#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomBehaviour"));
	}

	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SyncRandomSeedToClient(int32_t clientNetId) {
		return ((T (*)(RandomBehaviour*, int32_t))(Il2CppBase() + 0x44DAE7C))(this, clientNetId);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(RandomBehaviour*, int32_t))(Il2CppBase() + 0x44DB02C))(this, seed);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RandomBehaviour*, int32_t))(Il2CppBase() + 0x44DB0F8))(this, seed);
	}

};

}
