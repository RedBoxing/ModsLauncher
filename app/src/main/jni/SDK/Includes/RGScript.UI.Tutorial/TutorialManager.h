#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Tutorial {

class TutorialManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Tutorial", "TutorialManager"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _tutorialGroups() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _activatedTutorialGroupName() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_ActivatedTutorialGroup() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x453D74C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x453D810))(this);
	}
	template <typename T = void> T ActiveActionGroup(Il2CppString* actionGroupName, int32_t step) {
		return ((T (*)(TutorialManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x453DC7C))(this, actionGroupName, step);
	}
	template <typename T = void> T SwitchOn(Il2CppString* key) {
		return ((T (*)(TutorialManager*, Il2CppString*))(Il2CppBase() + 0x453DD74))(this, key);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TutorialManager*))(Il2CppBase() + 0x453DE04))(this);
	}

};

}
