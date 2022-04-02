#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.PInvoke {

class IosPlatformConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.PInvoke", "IosPlatformConfiguration"));
	}


	template <typename T = void> T SetClientId(Il2CppString* clientId) {
		return ((T (*)(IosPlatformConfiguration*, Il2CppString*))(Il2CppBase() + 0x2AEAA28))(this, clientId);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(IosPlatformConfiguration*, uintptr_t))(Il2CppBase() + 0x2AEAAE4))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x2AEAB68))(0);
	}

};

}
