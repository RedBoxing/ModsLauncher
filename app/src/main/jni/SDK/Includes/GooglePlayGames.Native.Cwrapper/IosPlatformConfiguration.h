#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class IosPlatformConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "IosPlatformConfiguration"));
	}


	template <typename T = uintptr_t> static T IosPlatformConfiguration_Construct() {
		return ((T (*)(void *))(Il2CppBase() + 0x35D3F38))(0);
	}
	template <typename T = void> static T IosPlatformConfiguration_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D3FC4))(0, self);
	}
	template <typename T = bool> static T IosPlatformConfiguration_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D4060))(0, self);
	}
	template <typename T = void> static T IosPlatformConfiguration_SetClientID(uintptr_t self, Il2CppString* client_id) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x35D4104))(0, self, client_id);
	}

};

}
