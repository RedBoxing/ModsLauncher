#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class ILanguageSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "ILanguageSource"));
	}


	template <typename T = uintptr_t> T get_SourceData() {
		return ((T (*)(ILanguageSource*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_SourceData(uintptr_t value) {
		return ((T (*)(ILanguageSource*, uintptr_t))(Il2CppBase() + 0x0))(this, value);
	}

};

}
