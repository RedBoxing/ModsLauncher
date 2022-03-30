#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FunctionUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FunctionUtil"));
	}


	template <typename T = float> static T LogType1(float t) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x44250BC))(0, t);
	}
	template <typename T = float> static T LogLinearType1(float t, float linearStart) {
		return ((T (*)(void *, float, float))(Il2CppBase() + 0x442518C))(0, t, linearStart);
	}

};

}
