#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameStateDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameStateDelegate"));
	}


	template <typename T = void> T Invoke(int32_t gamestate) {
		return ((T (*)(GameStateDelegate*, int32_t))(Il2CppBase() + 0x1C4CF88))(this, gamestate);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t gamestate, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GameStateDelegate*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1C4ED88))(this, gamestate, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(GameStateDelegate*, uintptr_t))(Il2CppBase() + 0x1C4EE14))(this, result);
	}

};

}
