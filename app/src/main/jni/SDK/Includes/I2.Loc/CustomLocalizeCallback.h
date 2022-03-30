#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class CustomLocalizeCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "CustomLocalizeCallback"));
	}

	template <typename T = uintptr_t> T& _OnLocalize() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CustomLocalizeCallback*))(Il2CppBase() + 0x4210A04))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CustomLocalizeCallback*))(Il2CppBase() + 0x4210B0C))(this);
	}
	template <typename T = void> T OnLocalize() {
		return ((T (*)(CustomLocalizeCallback*))(Il2CppBase() + 0x4210BE0))(this);
	}

};

}
