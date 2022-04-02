#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class Event
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "Event"));
	}


	template <typename T = uint64_t> static T Event_Count(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D1EE8))(0, self);
	}
	template <typename T = uintptr_t> static T Event_Description(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D1F84))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T Event_ImageUrl(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D2040))(0, self, out_arg, out_size);
	}
	template <typename T = uintptr_t> static T Event_Visibility(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D20FC))(0, self);
	}
	template <typename T = uintptr_t> static T Event_Id(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D2198))(0, self, out_arg, out_size);
	}
	template <typename T = bool> static T Event_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D2254))(0, self);
	}
	template <typename T = void> static T Event_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D22F8))(0, self);
	}
	template <typename T = uintptr_t> static T Event_Copy(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35D2394))(0, self);
	}
	template <typename T = uintptr_t> static T Event_Name(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x35D2430))(0, self, out_arg, out_size);
	}

};

}
