#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native.Cwrapper {

class Score
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native.Cwrapper", "Score"));
	}


	template <typename T = uint64_t> static T Score_Value(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357E74C))(0, self);
	}
	template <typename T = bool> static T Score_Valid(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357E7E8))(0, self);
	}
	template <typename T = uint64_t> static T Score_Rank(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357E88C))(0, self);
	}
	template <typename T = void> static T Score_Dispose(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x357E928))(0, self);
	}
	template <typename T = uintptr_t> static T Score_Metadata(uintptr_t self, Il2CppArray<uintptr_t>** out_arg, uintptr_t out_size) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>**, uintptr_t))(Il2CppBase() + 0x357E9C4))(0, self, out_arg, out_size);
	}

};

}
