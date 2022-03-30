#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowHelp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowHelp"));
	}

	template <typename T = uintptr_t> T& titleText() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& helpText() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowHelp*))(Il2CppBase() + 0x449F9F0))(this);
	}
	template <typename T = void> T SetHelpInfo(Il2CppString* title, Il2CppString* content) {
		return ((T (*)(UIWindowHelp*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x449FB18))(this, title, content);
	}
	template <typename T = void> static T ShowHelpWindow(Il2CppString* title, Il2CppString* content, uintptr_t parent) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x449FBDC))(0, title, content, parent);
	}

};

}
