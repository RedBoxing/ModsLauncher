#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGTransferGateEndless
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGTransferGateEndless"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(RGTransferGateEndless*))(Il2CppBase() + 0x43E6B38))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGTransferGateEndless*))(Il2CppBase() + 0x43E6B94))(this);
	}

};

}
