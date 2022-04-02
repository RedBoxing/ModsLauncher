#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class Achievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "Achievement"));
	}


	template <typename T = uint32_t> static T Achievement_TotalSteps(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA880))(0, self);
	}
	template <typename T = uintptr_t> static T Achievement_Description(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35CA91C))(0, self, out_arg, out_size);
	}
	template <typename T = void> static T Achievement_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CA9D8))(0, self);
	}
	template <typename T = uintptr_t> static T Achievement_UnlockedIconUrl(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35CAA74))(0, self, out_arg, out_size);
	}
	template <typename T = uint64_t> static T Achievement_LastModifiedTime(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CAB30))(0, self);
	}
	template <typename T = uintptr_t> static T Achievement_RevealedIconUrl(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35CABCC))(0, self, out_arg, out_size);
	}
	template <typename T = uint32_t> static T Achievement_CurrentSteps(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CAC88))(0, self);
	}
	template <typename T = uintptr_t> static T Achievement_State(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CAD24))(0, self);
	}
	template <typename T = bool> static T Achievement_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CADC0))(0, self);
	}
	template <typename T = uint64_t> static T Achievement_LastModified(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CAE64))(0, self);
	}
	template <typename T = uint64_t> static T Achievement_XP(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CAF00))(0, self);
	}
	template <typename T = uintptr_t> static T Achievement_Type(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35CAF9C))(0, self);
	}
	template <typename T = uintptr_t> static T Achievement_Id(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35CB038))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T Achievement_Name(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35CB0F4))(0, self, out_arg, out_size);
	}

};

}
