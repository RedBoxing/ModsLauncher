#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ValueProperty {

class Vector2Property
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ValueProperty", "Vector2Property"));
	}


	template <typename T = Il2CppVector2> T OnFinalValueAdd(Il2CppVector2 finalValue, Il2CppVector2 additionalValue) {
		return ((T (*)(Vector2Property*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x43583C4))(this, finalValue, additionalValue);
	}
	template <typename T = Il2CppVector2> T OnFinalValueMultiply(Il2CppVector2 finalValue, Il2CppVector2 additionalValue) {
		return ((T (*)(Vector2Property*, Il2CppVector2, Il2CppVector2))(Il2CppBase() + 0x43584B0))(this, finalValue, additionalValue);
	}

};

}
