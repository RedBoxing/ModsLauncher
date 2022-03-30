#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.UI.Tutorial {

class TutorialGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.UI.Tutorial", "TutorialGroup"));
	}

	template <typename T = Il2CppString*> T& GroupName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _actions() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _step() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsActivated() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T get_IsActivated() {
		return ((T (*)(TutorialGroup*))(Il2CppBase() + 0x453D130))(this);
	}
	template <typename T = void> T set_IsActivated(bool value) {
		return ((T (*)(TutorialGroup*, bool))(Il2CppBase() + 0x453D138))(this, value);
	}
	template <typename T = uintptr_t> T get_CurrentAction() {
		return ((T (*)(TutorialGroup*))(Il2CppBase() + 0x453D144))(this);
	}
	template <typename T = void> T AddAction(uintptr_t action) {
		return ((T (*)(TutorialGroup*, uintptr_t))(Il2CppBase() + 0x453D23C))(this, action);
	}
	template <typename T = void> T Active(int32_t step) {
		return ((T (*)(TutorialGroup*, int32_t))(Il2CppBase() + 0x453D314))(this, step);
	}
	template <typename T = void> T SwitchOn(Il2CppString* key) {
		return ((T (*)(TutorialGroup*, Il2CppString*))(Il2CppBase() + 0x453D488))(this, key);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TutorialGroup*))(Il2CppBase() + 0x453D54C))(this);
	}

};

}
