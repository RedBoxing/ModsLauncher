#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizedString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizedString"));
	}

	template <typename T = Il2CppString*> T& mTerm() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& mRTL_IgnoreArabicFix() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mRTL_MaxLineLength() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mRTL_ConvertNumbers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_DontLocalizeParameters() {
		return *(T*)((uintptr_t)this + 0x11);
	}

	template <typename T = Il2CppString*> static T op_Implicit(uintptr_t s) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x45EC4B0))(0, s);
	}
	template <typename T = uintptr_t> static T op_Implicit_1(Il2CppString* term) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45EC644))(0, term);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(LocalizedString*))(Il2CppBase() + 0x16F3E00))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(LocalizedString*))(Il2CppBase() + 0x16F3E08))(this);
	}

};

}
