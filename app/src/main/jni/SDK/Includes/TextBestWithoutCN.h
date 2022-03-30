#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TextBestWithoutCN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TextBestWithoutCN"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(TextBestWithoutCN*))(Il2CppBase() + 0x43C35F8))(this);
	}

};

}
