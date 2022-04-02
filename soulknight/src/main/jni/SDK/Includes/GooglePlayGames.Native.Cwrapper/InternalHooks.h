#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class InternalHooks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "InternalHooks"));
	}


	template <typename T = void> static T InternalHooks_ConfigureForUnityPlugin(uintptr_t builder, Il2CppString* unity_version) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35D3DDC))(0, builder, unity_version);
	}
	template <typename T = uintptr_t> static T InternalHooks_GetApiClient(uintptr_t services) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D3E9C))(0, services);
	}

};

}
