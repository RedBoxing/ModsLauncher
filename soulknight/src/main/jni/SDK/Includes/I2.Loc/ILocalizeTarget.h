#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class ILocalizeTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "ILocalizeTarget"));
	}


	template <typename T = bool> T IsValid(uintptr_t cmp) {
		return ((T (*)(ILocalizeTarget*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(ILocalizeTarget*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x0))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(ILocalizeTarget*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, cmp, mainTranslation, secondaryTranslation);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(ILocalizeTarget*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(ILocalizeTarget*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(ILocalizeTarget*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(ILocalizeTarget*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(ILocalizeTarget*, uintptr_t))(Il2CppBase() + 0x0))(this, cmp);
	}

};

}
