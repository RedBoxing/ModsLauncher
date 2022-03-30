#pragma once
#include "Il2Cpp/Il2Cpp.h"

class C10WerewolfHand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "C10WerewolfHand"));
	}


	template <typename T = void> T SwitchShowFrontWeapon() {
		return ((T (*)(C10WerewolfHand*))(Il2CppBase() + 0x1F02BCC))(this);
	}
	template <typename T = void> T iFixBaseProxy_SwitchShowFrontWeapon() {
		return ((T (*)(C10WerewolfHand*))(Il2CppBase() + 0x1F02C5C))(this);
	}

};

}
