#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEnergy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEnergy"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(RGEnergy*))(Il2CppBase() + 0x1C4003C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGEnergy*))(Il2CppBase() + 0x1C401C0))(this);
	}
	template <typename T = void> T GetItem() {
		return ((T (*)(RGEnergy*))(Il2CppBase() + 0x1C407A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetItem() {
		return ((T (*)(RGEnergy*))(Il2CppBase() + 0x1C40A20))(this);
	}

};

}
