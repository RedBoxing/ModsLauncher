#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Tutorial.TutorialAction {

class TutorialFingerAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Tutorial.TutorialAction", "TutorialFingerAction"));
	}

	template <typename T = Il2CppString*> T& nodePathForFinger() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& tipsLocalizationKey() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TutorialFingerAction*))(Il2CppBase() + 0x453C62C))(this);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(TutorialFingerAction*))(Il2CppBase() + 0x453C690))(this);
	}
	template <typename T = void> T iFixBaseProxy_Enter() {
		return ((T (*)(TutorialFingerAction*))(Il2CppBase() + 0x453CCD4))(this);
	}

};

}
