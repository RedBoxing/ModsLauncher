#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class GameServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "GameServices"));
	}


	template <typename T = void> static T GameServices_Flush(uintptr_t self, uintptr_t callback, uintptr_t callback_arg) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35D3578))(0, self, callback, callback_arg);
	}
	template <typename T = bool> static T GameServices_IsAuthorized(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D3634))(0, self);
	}
	template <typename T = void> static T GameServices_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D36D8))(0, self);
	}
	template <typename T = void> static T GameServices_SignOut(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D3774))(0, self);
	}
	template <typename T = void> static T GameServices_StartAuthorizationUI(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D3810))(0, self);
	}

};

}
