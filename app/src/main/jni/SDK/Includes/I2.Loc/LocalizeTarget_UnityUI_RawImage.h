#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetUnityUIRawImage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityUI_RawImage"));
	}


	template <typename T = void> static T AutoRegister() {
		return ((T (*)(void *))(Il2CppBase() + 0x45EB3FC))(0);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityUIRawImage*, uintptr_t))(Il2CppBase() + 0x45EB500))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityUIRawImage*, uintptr_t))(Il2CppBase() + 0x45EB574))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetUnityUIRawImage*))(Il2CppBase() + 0x45EB5E8))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityUIRawImage*))(Il2CppBase() + 0x45EB648))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityUIRawImage*))(Il2CppBase() + 0x45EB6A8))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetUnityUIRawImage*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45EB708))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetUnityUIRawImage*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45EB884))(this, cmp, mainTranslation, secondaryTranslation);
	}

};

}
