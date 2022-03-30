#pragma once
#include "Il2Cpp/Il2Cpp.h"

class VectorTransfer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VectorTransfer"));
	}


	template <typename T = uintptr_t> static T Vec2Int(Il2CppVector3 v3) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4358880))(0, v3);
	}
	template <typename T = uintptr_t> static T Vec3Int(Il2CppVector3 v3) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x4358920))(0, v3);
	}
	template <typename T = Il2CppVector2> static T Vec2(Il2CppVector3 v3) {
		return ((T (*)(void *, Il2CppVector3))(Il2CppBase() + 0x43589D4))(0, v3);
	}
	template <typename T = uintptr_t> static T Vec2Int_1(uintptr_t v3) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4358A74))(0, v3);
	}
	template <typename T = Il2CppVector2> static T Vec2_1(uintptr_t v3) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4358B28))(0, v3);
	}
	template <typename T = Il2CppVector3> static T Vec3(uintptr_t v2) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4358BC8))(0, v2);
	}
	template <typename T = Il2CppVector3> static T Vec3_1(Il2CppVector2 v2) {
		return ((T (*)(void *, Il2CppVector2))(Il2CppBase() + 0x4358C78))(0, v2);
	}

};

}
