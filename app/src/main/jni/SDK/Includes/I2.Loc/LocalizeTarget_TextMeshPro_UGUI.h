#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetTextMeshProUGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_TextMeshPro_UGUI"));
	}

	template <typename T = uintptr_t> T& mAlignment_RTL() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mAlignment_LTR() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& mAlignmentWasRTL() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& mInitializeAlignment() {
		return *(T*)((uintptr_t)this + 0x29);
	}

	template <typename T = void> static T AutoRegister() {
		return ((T (*)(void *))(Il2CppBase() + 0x45E7130))(0);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetTextMeshProUGUI*, uintptr_t))(Il2CppBase() + 0x45E7234))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetTextMeshProUGUI*, uintptr_t))(Il2CppBase() + 0x45E72A8))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetTextMeshProUGUI*))(Il2CppBase() + 0x45E731C))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetTextMeshProUGUI*))(Il2CppBase() + 0x45E737C))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetTextMeshProUGUI*))(Il2CppBase() + 0x45E73DC))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetTextMeshProUGUI*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E743C))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetTextMeshProUGUI*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45E7604))(this, cmp, mainTranslation, secondaryTranslation);
	}

};

}
