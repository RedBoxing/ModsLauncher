#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class Player
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "Player"));
	}


	template <typename T = uintptr_t> static T Player_CurrentLevel(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3574C00))(0, self);
	}
	template <typename T = uintptr_t> static T Player_Name(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3574C9C))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T Player_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3574D58))(0, self);
	}
	template <typename T = uintptr_t> static T Player_AvatarUrl(uintptr_t self, uintptr_t resolution, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3574DF4))(0, self, resolution, out_arg, out_size);
	}
	template <typename T = uint64_t> static T Player_LastLevelUpTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3574EC0))(0, self);
	}
	template <typename T = uintptr_t> static T Player_Title(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3574F5C))(0, self, out_arg, out_size);
	}
	template <typename T = uint64_t> static T Player_CurrentXP(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575018))(0, self);
	}
	template <typename T = bool> static T Player_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35750B4))(0, self);
	}
	template <typename T = bool> static T Player_HasLevelInfo(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3575158))(0, self);
	}
	template <typename T = uintptr_t> static T Player_NextLevel(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35751FC))(0, self);
	}
	template <typename T = uintptr_t> static T Player_Id(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x3575298))(0, self, out_arg, out_size);
	}

};

}
