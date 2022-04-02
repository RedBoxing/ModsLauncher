#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetUnityStandardTextMesh
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityStandard_TextMesh"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x45EA384))(0);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardTextMesh*, uintptr_t))(Il2CppBase() + 0x45EA488))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardTextMesh*, uintptr_t))(Il2CppBase() + 0x45EA4FC))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetUnityStandardTextMesh*))(Il2CppBase() + 0x45EA570))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardTextMesh*))(Il2CppBase() + 0x45EA5D0))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardTextMesh*))(Il2CppBase() + 0x45EA630))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetUnityStandardTextMesh*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45EA690))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetUnityStandardTextMesh*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45EA860))(this, cmp, mainTranslation, secondaryTranslation);
	}

};

}
