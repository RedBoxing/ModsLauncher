#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GizmosUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GizmosUtil"));
	}


	template <typename T = void> static T DrawBox(Il2CppVector2 centerPosition, Il2CppVector2 size, float angle) {
		return ((T (*)(void *, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x443B3E8))(0, centerPosition, size, angle);
	}
	template <typename T = void> static T DrawCircle(Il2CppVector2 centerPosition, float radius) {
		return ((T (*)(void *, Il2CppVector2, float))(Il2CppBase() + 0x443B7E4))(0, centerPosition, radius);
	}

};

}
