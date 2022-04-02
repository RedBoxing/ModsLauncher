#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBMapIndexPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBMapIndexPanel"));
	}


	template <typename T = void> T OnEnable() {
		return ((T (*)(SBMapIndexPanel*))(Il2CppBase() + 0x180B000))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SBMapIndexPanel*))(Il2CppBase() + 0x180B05C))(this);
	}

};

}
