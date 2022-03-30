#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameRandomSeedMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameRandomSeedMessage"));
	}

	template <typename T = int32_t> T& f_sample_seed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& f_map_seed() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(GameRandomSeedMessage*, uintptr_t))(Il2CppBase() + 0x442D748))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(GameRandomSeedMessage*, uintptr_t))(Il2CppBase() + 0x442D82C))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(GameRandomSeedMessage*, uintptr_t))(Il2CppBase() + 0x442D910))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(GameRandomSeedMessage*, uintptr_t))(Il2CppBase() + 0x442D918))(this, P0);
	}

};

}
