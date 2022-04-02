#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRandomInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRandomInterface"));
	}


	template <typename T = void> T SyncRandomSeedToClient(int32_t clientNetId) {
		return ((T (*)(RGRandomInterface*, int32_t))(Il2CppBase() + 0x0))(this, clientNetId);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(RGRandomInterface*, int32_t))(Il2CppBase() + 0x0))(this, seed);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RGRandomInterface*, int32_t))(Il2CppBase() + 0x0))(this, seed);
	}

};

}
