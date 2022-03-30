#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class Leaderboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "Leaderboard"));
	}


	template <typename T = uintptr_t> static T Leaderboard_Name(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D41C4))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T Leaderboard_Id(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D4280))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T Leaderboard_IconUrl(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D433C))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T Leaderboard_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D43F8))(0, self);
	}
	template <typename T = bool> static T Leaderboard_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D4494))(0, self);
	}
	template <typename T = uintptr_t> static T Leaderboard_Order(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D4538))(0, self);
	}

};

}
