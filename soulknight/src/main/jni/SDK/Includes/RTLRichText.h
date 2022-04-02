#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RTLRichText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RTLRichText"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(RTLRichText*))(Il2CppBase() + 0x44D85EC))(this);
	}

};

}
