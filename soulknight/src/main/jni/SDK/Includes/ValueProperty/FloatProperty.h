#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ValueProperty {

class FloatProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ValueProperty", "FloatProperty"));
	}


	template <typename T = float> T OnFinalValueAdd(float finalValue, float additionalValue) {
		return ((T (*)(FloatProperty*, float, float))(Il2CppBase() + 0x435810C))(this, finalValue, additionalValue);
	}
	template <typename T = float> T OnFinalValueMultiply(float finalValue, float additionalValue) {
		return ((T (*)(FloatProperty*, float, float))(Il2CppBase() + 0x4358188))(this, finalValue, additionalValue);
	}

};

}
