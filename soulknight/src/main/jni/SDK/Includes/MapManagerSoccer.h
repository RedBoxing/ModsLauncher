#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerSoccer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerSoccer"));
	}

	template <typename T = uintptr_t> T& football() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(MapManagerSoccer*, int32_t))(Il2CppBase() + 0x41E6378))(this, seed);
	}
	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManagerSoccer*))(Il2CppBase() + 0x41E6408))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetRGRandomSeed(int32_t P0) {
		return ((T (*)(MapManagerSoccer*, int32_t))(Il2CppBase() + 0x41E6590))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(MapManagerSoccer*))(Il2CppBase() + 0x41E6598))(this);
	}

};

}
