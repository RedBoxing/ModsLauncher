#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetUnityUIImage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityUI_Image"));
	}


	template <typename T = void> static T AutoRegister() {
		return ((T (*)(void *))(Il2CppBase() + 0x45EAC28))(0);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetUnityUIImage*))(Il2CppBase() + 0x45EAD2C))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityUIImage*))(Il2CppBase() + 0x45EAD8C))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityUIImage*))(Il2CppBase() + 0x45EADEC))(this);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityUIImage*, uintptr_t))(Il2CppBase() + 0x45EAE4C))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityUIImage*, uintptr_t))(Il2CppBase() + 0x45EAF44))(this, cmp);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetUnityUIImage*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45EAFB8))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetUnityUIImage*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45EB220))(this, cmp, mainTranslation, secondaryTranslation);
	}

};

}
