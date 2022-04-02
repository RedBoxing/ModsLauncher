#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGChainHideWhenNoTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGChainHideWhenNoTarget"));
	}


	template <typename T = void> T DoUpdate() {
		return ((T (*)(RGChainHideWhenNoTarget*))(Il2CppBase() + 0x19DB1E0))(this);
	}
	template <typename T = void> T iFixBaseProxy_DoUpdate() {
		return ((T (*)(RGChainHideWhenNoTarget*))(Il2CppBase() + 0x19DB39C))(this);
	}

};

}
