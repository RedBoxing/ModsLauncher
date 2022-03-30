#pragma once
#include "Il2Cpp/Il2Cpp.h"

class InputControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InputControl"));
	}

	template <typename T = uintptr_t> T& playerInput() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rewiredGo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& _buttonTypeName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& moveVec() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(InputControl*))(Il2CppBase() + 0x1A42BC0))(this);
	}
	template <typename T = bool> T GetButtonDown(uintptr_t type) {
		return ((T (*)(InputControl*, uintptr_t))(Il2CppBase() + 0x1A42D78))(this, type);
	}
	template <typename T = bool> T GetButtonUp(uintptr_t type) {
		return ((T (*)(InputControl*, uintptr_t))(Il2CppBase() + 0x1A42E5C))(this, type);
	}
	template <typename T = Il2CppVector2> T GetMoveVec() {
		return ((T (*)(InputControl*))(Il2CppBase() + 0x1A42F40))(this);
	}
	template <typename T = void> T EnableControllerMap(bool state) {
		return ((T (*)(InputControl*, bool))(Il2CppBase() + 0x1A43048))(this, state);
	}

};

}
