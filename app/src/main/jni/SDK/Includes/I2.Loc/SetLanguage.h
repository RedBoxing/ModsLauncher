#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class SetLanguage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "SetLanguage"));
	}

	template <typename T = Il2CppString*> T& _Language() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mSource() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnClick() {
		return ((T (*)(SetLanguage*))(Il2CppBase() + 0x45F1544))(this);
	}
	template <typename T = void> T ApplyLanguage() {
		return ((T (*)(SetLanguage*))(Il2CppBase() + 0x45F15A4))(this);
	}

};

}
