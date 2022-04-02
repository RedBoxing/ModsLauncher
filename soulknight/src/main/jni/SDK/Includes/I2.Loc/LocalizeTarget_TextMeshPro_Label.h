#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetTextMeshProLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_TextMeshPro_Label"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x45E5DB4))(0);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetTextMeshProLabel*, uintptr_t))(Il2CppBase() + 0x45E5EB8))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetTextMeshProLabel*, uintptr_t))(Il2CppBase() + 0x45E5F2C))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetTextMeshProLabel*))(Il2CppBase() + 0x45E5FA0))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetTextMeshProLabel*))(Il2CppBase() + 0x45E6000))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetTextMeshProLabel*))(Il2CppBase() + 0x45E6060))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetTextMeshProLabel*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E60C0))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetTextMeshProLabel*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45E6288))(this, cmp, mainTranslation, secondaryTranslation);
	}
	template <typename T = uintptr_t> static T GetTMPFontFromMaterial(uintptr_t cmp, Il2CppString* matName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45E6A80))(0, cmp, matName);
	}
	template <typename T = void> static T InitAlignment_TMPro(bool isRTL, uintptr_t alignment, uintptr_t* alignLTR, uintptr_t* alignRTL) {
		return ((T (*)(void *, bool, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E6E2C))(0, isRTL, alignment, alignLTR, alignRTL);
	}
	template <typename T = void> static T SetFont(uintptr_t label, uintptr_t newFont) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45E68D0))(0, label, newFont);
	}
	template <typename T = void> static T SetMaterial(uintptr_t label, uintptr_t newMat) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x45E6C90))(0, label, newMat);
	}

};

}
