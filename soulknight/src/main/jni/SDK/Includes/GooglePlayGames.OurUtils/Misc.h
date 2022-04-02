#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.OurUtils {

class Misc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.OurUtils", "Misc"));
	}


	template <typename T = bool> static T BuffersAreIdentical(Il2CppArray<uintptr_t>* a, Il2CppArray<uintptr_t>* b) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x460F8B0))(0, a, b);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetSubsetBytes(Il2CppArray<uintptr_t>* array, int32_t offset, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x460F9BC))(0, array, offset, length);
	}
	template <typename T = uintptr_t> static T CheckNotNull(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, value);
	}
	template <typename T = uintptr_t> static T CheckNotNull_1(uintptr_t value, Il2CppString* paramName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(0, value, paramName);
	}

};

}
