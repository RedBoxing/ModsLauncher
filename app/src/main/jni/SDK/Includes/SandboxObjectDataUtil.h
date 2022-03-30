#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SandboxObjectDataUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SandboxObjectDataUtil"));
	}


	template <typename T = bool> static T PositionInRange(uintptr_t position) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1816C08))(0, position);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T IntToBitConverter(int32_t num) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1816CA0))(0, num);
	}
	template <typename T = int32_t> static T IntToBitConverter_1(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1816D48))(0, bytes);
	}

};

}
