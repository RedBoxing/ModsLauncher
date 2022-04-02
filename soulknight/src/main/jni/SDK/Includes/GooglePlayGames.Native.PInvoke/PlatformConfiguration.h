#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class PlatformConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "PlatformConfiguration"));
	}


	template <typename T = uintptr_t> T AsHandle() {
		return ((T (*)(PlatformConfiguration*))(Il2CppBase() + 0x2AE9F14))(this);
	}

};

}
