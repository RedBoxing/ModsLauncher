#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomStatue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomStatue"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(RandomStatue*))(Il2CppBase() + 0x44DBF88))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RandomStatue*, int32_t))(Il2CppBase() + 0x44DBFE4))(this, seed);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(RandomStatue*, int32_t))(Il2CppBase() + 0x44DC3EC))(this, P0);
	}

};

}
