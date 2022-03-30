#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Tutorial {

class TutorialActionWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Tutorial", "TutorialActionWrapper"));
	}

	template <typename T = uintptr_t> T& TutorialAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_State() {
		return ((T (*)(TutorialActionWrapper*))(Il2CppBase() + 0x453CF1C))(this);
	}
	template <typename T = void> T set_State(uintptr_t value) {
		return ((T (*)(TutorialActionWrapper*, uintptr_t))(Il2CppBase() + 0x453CF24))(this, value);
	}
	template <typename T = Il2CppString*> T get_SwitchKey() {
		return ((T (*)(TutorialActionWrapper*))(Il2CppBase() + 0x453CF2C))(this);
	}
	template <typename T = void> T Enter() {
		return ((T (*)(TutorialActionWrapper*))(Il2CppBase() + 0x453CFC8))(this);
	}
	template <typename T = void> T Exit() {
		return ((T (*)(TutorialActionWrapper*))(Il2CppBase() + 0x453D048))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(TutorialActionWrapper*))(Il2CppBase() + 0x453D0C8))(this);
	}

};

}
