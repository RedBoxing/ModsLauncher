#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetUnityStandardPrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityStandard_Prefab"));
	}


	template <typename T = void> static T AutoRegister() {
		return ((T (*)(void *))(Il2CppBase() + 0x45E9314))(0);
	}
	template <typename T = bool> T IsValid(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*, uintptr_t))(Il2CppBase() + 0x45E940C))(this, cmp);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*, uintptr_t))(Il2CppBase() + 0x45E9480))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*, uintptr_t))(Il2CppBase() + 0x45E94F4))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*))(Il2CppBase() + 0x45E9568))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*))(Il2CppBase() + 0x45E95C8))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*))(Il2CppBase() + 0x45E9628))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E9688))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45E9750))(this, cmp, mainTranslation, secondaryTranslation);
	}
	template <typename T = uintptr_t> T InstantiateNewPrefab(uintptr_t cmp, Il2CppString* mainTranslation) {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x45E9A2C))(this, cmp, mainTranslation);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid(uintptr_t P0) {
		return ((T (*)(LocalizeTargetUnityStandardPrefab*, uintptr_t))(Il2CppBase() + 0x45E9D1C))(this, P0);
	}

};

}
