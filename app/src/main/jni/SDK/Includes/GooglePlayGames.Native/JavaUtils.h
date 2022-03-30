#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.Native {

class JavaUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.Native", "JavaUtils"));
	}

	template <typename T = uintptr_t> static T& IntPtrConstructor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T JavaObjectFromPointer(uintptr_t jobject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x358B3A0))(0, jobject);
	}
	template <typename T = uintptr_t> static T NullSafeCall(uintptr_t target, Il2CppString* methodName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x358B5A0))(0, target, methodName, args);
	}

};

}
