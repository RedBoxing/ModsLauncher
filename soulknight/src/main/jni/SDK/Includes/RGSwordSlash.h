#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGSwordSlash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGSwordSlash"));
	}


	template <typename T = void> T ResetSize() {
		return ((T (*)(RGSwordSlash*))(Il2CppBase() + 0x43DE5E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ResetSize() {
		return ((T (*)(RGSwordSlash*))(Il2CppBase() + 0x43DE72C))(this);
	}

};

}
