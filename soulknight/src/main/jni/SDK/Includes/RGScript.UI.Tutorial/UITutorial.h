#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Tutorial {

class UITutorial
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Tutorial", "UITutorial"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UITutorial*))(Il2CppBase() + 0x453DF7C))(this);
	}
	template <typename T = void> T OnButtonClicked() {
		return ((T (*)(UITutorial*))(Il2CppBase() + 0x453E0E0))(this);
	}
	template <typename T = uintptr_t> static T FindNode(Il2CppString* nodePath) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x453E2AC))(0, nodePath);
	}
	template <typename T = void> T SetPosition(Il2CppString* nodePath) {
		return ((T (*)(UITutorial*, Il2CppString*))(Il2CppBase() + 0x453C858))(this, nodePath);
	}

};

}
