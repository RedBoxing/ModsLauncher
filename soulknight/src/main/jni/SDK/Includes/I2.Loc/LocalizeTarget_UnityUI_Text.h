#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetUnityUIText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityUI_Text"));
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
		return ((T (*)(void *))(Il2CppBase() + 0x45EBA60))(0);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityUIText*, uintptr_t))(Il2CppBase() + 0x45EBB64))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityUIText*, uintptr_t))(Il2CppBase() + 0x45EBBD8))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetUnityUIText*))(Il2CppBase() + 0x45EBC4C))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityUIText*))(Il2CppBase() + 0x45EBCAC))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityUIText*))(Il2CppBase() + 0x45EBD0C))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetUnityUIText*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45EBD6C))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetUnityUIText*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45EBF3C))(this, cmp, mainTranslation, secondaryTranslation);
	}
	template <typename T = void> T InitAlignment(bool isRTL, uintptr_t alignment, uintptr_t* alignLTR, uintptr_t* alignRTL) {
		return ((T (*)(LocalizeTargetUnityUIText*, bool, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45EC300))(this, isRTL, alignment, alignLTR, alignRTL);
	}

};

}
