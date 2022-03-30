#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetUnityStandardSpriteRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityStandard_SpriteRenderer"));
	}


	template <typename T = void> static T AutoRegister() {
		return ((T (*)(void *))(Il2CppBase() + 0x45E9D24))(0);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardSpriteRenderer*, uintptr_t))(Il2CppBase() + 0x45E9E28))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardSpriteRenderer*, uintptr_t))(Il2CppBase() + 0x45E9E9C))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetUnityStandardSpriteRenderer*))(Il2CppBase() + 0x45E9F10))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardSpriteRenderer*))(Il2CppBase() + 0x45E9F70))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardSpriteRenderer*))(Il2CppBase() + 0x45E9FD0))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetUnityStandardSpriteRenderer*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45EA030))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetUnityStandardSpriteRenderer*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45EA1A8))(this, cmp, mainTranslation, secondaryTranslation);
	}

};

}
