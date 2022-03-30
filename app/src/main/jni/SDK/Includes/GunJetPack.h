#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunJetPack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunJetPack"));
	}


	template <typename T = void> T Attack() {
		return ((T (*)(GunJetPack*))(Il2CppBase() + 0x227A680))(this);
	}

};

}
