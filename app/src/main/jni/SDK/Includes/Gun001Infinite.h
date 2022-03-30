#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun001Infinite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun001Infinite"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(Gun001Infinite*))(Il2CppBase() + 0x461E7CC))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool manual) {
		return ((T (*)(Gun001Infinite*, bool, bool))(Il2CppBase() + 0x461E8C0))(this, value1, manual);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun001Infinite*))(Il2CppBase() + 0x461EB28))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(Gun001Infinite*, bool, bool))(Il2CppBase() + 0x461ECBC))(this, P0, P1);
	}

};

}
