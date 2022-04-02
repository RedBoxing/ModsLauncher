#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class TermsPopup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "TermsPopup"));
	}

	template <typename T = Il2CppString*> T& Filter() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_Filter() {
		return ((T (*)(TermsPopup*))(Il2CppBase() + 0x173B7B0))(this);
	}
	template <typename T = void> T set_Filter(Il2CppString* value) {
		return ((T (*)(TermsPopup*, Il2CppString*))(Il2CppBase() + 0x173B7A8))(this, value);
	}

};

}
