#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ValueProperty {

class IntProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ValueProperty", "IntProperty"));
	}


	template <typename T = int32_t> T OnFinalValueAdd(int32_t finalValue, int32_t additionalValue) {
		return ((T (*)(IntProperty*, int32_t, int32_t))(Il2CppBase() + 0x4358264))(this, finalValue, additionalValue);
	}
	template <typename T = int32_t> T OnFinalValueMultiply(int32_t finalValue, int32_t additionalValue) {
		return ((T (*)(IntProperty*, int32_t, int32_t))(Il2CppBase() + 0x43582E0))(this, finalValue, additionalValue);
	}

};

}
