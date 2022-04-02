#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SerializedRandomBahaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SerializedRandomBahaviour"));
	}

	template <typename T = uintptr_t> T& rg_random() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T SyncRandomSeedToClient(int32_t clientNetId) {
		return ((T (*)(SerializedRandomBahaviour*, int32_t))(Il2CppBase() + 0x18259CC))(this, clientNetId);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(SerializedRandomBahaviour*, int32_t))(Il2CppBase() + 0x1825B7C))(this, seed);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(SerializedRandomBahaviour*, int32_t))(Il2CppBase() + 0x1825C4C))(this, seed);
	}

};

}
