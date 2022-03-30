#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Res
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Res"));
	}


	template <typename T = uintptr_t> static T Make(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, path);
	}
	template <typename T = uintptr_t> static T Make_1(Il2CppString* path, Il2CppVector3 position, Il2CppQuaternion rotation) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x0))(0, path, position, rotation);
	}
	template <typename T = uintptr_t> static T Load(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, path);
	}
	template <typename T = uintptr_t> static T Get(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, self);
	}
	template <typename T = uintptr_t> static T Get_1(uintptr_t self) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, self);
	}

};

}
