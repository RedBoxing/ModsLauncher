#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetUnityStandardChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityStandard_Child"));
	}


	template <typename T = void> static T AutoRegister() {
		return ((T (*)(void *))(Il2CppBase() + 0x45E83A8))(0);
	}
	template <typename T = bool> T IsValid(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardChild*, uintptr_t))(Il2CppBase() + 0x45E84A0))(this, cmp);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardChild*, uintptr_t))(Il2CppBase() + 0x45E8548))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardChild*, uintptr_t))(Il2CppBase() + 0x45E85BC))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetUnityStandardChild*))(Il2CppBase() + 0x45E8630))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardChild*))(Il2CppBase() + 0x45E8690))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardChild*))(Il2CppBase() + 0x45E86F0))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetUnityStandardChild*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E8750))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetUnityStandardChild*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45E8818))(this, cmp, mainTranslation, secondaryTranslation);
	}
	template <typename T = bool> T iFixBaseProxy_IsValid(uintptr_t P0) {
		return ((T (*)(LocalizeTargetUnityStandardChild*, uintptr_t))(Il2CppBase() + 0x45E8A70))(this, P0);
	}

};

}
