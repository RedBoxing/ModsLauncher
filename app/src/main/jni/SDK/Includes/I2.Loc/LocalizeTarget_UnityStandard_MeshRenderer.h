#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeTargetUnityStandardMeshRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeTarget_UnityStandard_MeshRenderer"));
	}


	template <typename T = void> static T AutoRegister() {
		return ((T (*)(void *))(Il2CppBase() + 0x45E8A78))(0);
	}
	template <typename T = uintptr_t> T GetPrimaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardMeshRenderer*, uintptr_t))(Il2CppBase() + 0x45E8B7C))(this, cmp);
	}
	template <typename T = uintptr_t> T GetSecondaryTermType(uintptr_t cmp) {
		return ((T (*)(LocalizeTargetUnityStandardMeshRenderer*, uintptr_t))(Il2CppBase() + 0x45E8BF0))(this, cmp);
	}
	template <typename T = bool> T CanUseSecondaryTerm() {
		return ((T (*)(LocalizeTargetUnityStandardMeshRenderer*))(Il2CppBase() + 0x45E8C64))(this);
	}
	template <typename T = bool> T AllowMainTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardMeshRenderer*))(Il2CppBase() + 0x45E8CC4))(this);
	}
	template <typename T = bool> T AllowSecondTermToBeRTL() {
		return ((T (*)(LocalizeTargetUnityStandardMeshRenderer*))(Il2CppBase() + 0x45E8D24))(this);
	}
	template <typename T = void> T GetFinalTerms(uintptr_t cmp, Il2CppString* Main, Il2CppString* Secondary, uintptr_t* primaryTerm, uintptr_t* secondaryTerm) {
		return ((T (*)(LocalizeTargetUnityStandardMeshRenderer*, uintptr_t, Il2CppString*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x45E8D84))(this, cmp, Main, Secondary, primaryTerm, secondaryTerm);
	}
	template <typename T = void> T DoLocalize(uintptr_t cmp, Il2CppString* mainTranslation, Il2CppString* secondaryTranslation) {
		return ((T (*)(LocalizeTargetUnityStandardMeshRenderer*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45E903C))(this, cmp, mainTranslation, secondaryTranslation);
	}

};

}
