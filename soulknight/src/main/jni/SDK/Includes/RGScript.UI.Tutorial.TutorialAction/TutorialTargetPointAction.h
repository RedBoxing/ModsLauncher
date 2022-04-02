#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Tutorial.TutorialAction {

class TutorialTargetPointAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Tutorial.TutorialAction", "TutorialTargetPointAction"));
	}

	template <typename T = Il2CppVector2> T& destination() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TutorialTargetPointAction*))(Il2CppBase() + 0x453CCD8))(this);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(TutorialTargetPointAction*))(Il2CppBase() + 0x453CD3C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Enter() {
		return ((T (*)(TutorialTargetPointAction*))(Il2CppBase() + 0x453CF18))(this);
	}

};

}
