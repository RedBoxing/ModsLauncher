#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Tutorial.TutorialAction {

class TutorialAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Tutorial.TutorialAction", "TutorialAction"));
	}

	template <typename T = Il2CppString*> static T& BoxGroupGeneralSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BoxGroupEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& actionName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& switchKey() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& groupName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& onEnter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& onExit() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnActionNameValueChanged() {
		return ((T (*)(TutorialAction*))(Il2CppBase() + 0x453C430))(this);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(TutorialAction*))(Il2CppBase() + 0x453C48C))(this);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(TutorialAction*))(Il2CppBase() + 0x453C530))(this);
	}

};

}
