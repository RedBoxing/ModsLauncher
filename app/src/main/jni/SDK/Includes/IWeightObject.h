#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IWeightObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IWeightObject"));
	}


	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(IWeightObject*))(Il2CppBase() + 0x0))(this);
	}

};

}
