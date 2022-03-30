#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Integration.UnityUI {

class RewiredEventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Integration.UnityUI", "RewiredEventSystem"));
	}

	template <typename T = bool> T& _alwaysUpdate() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T get_alwaysUpdate() {
		return ((T (*)(RewiredEventSystem*))(Il2CppBase() + 0x268DBB8))(this);
	}
	template <typename T = void> T set_alwaysUpdate(bool value) {
		return ((T (*)(RewiredEventSystem*, bool))(Il2CppBase() + 0x268DC18))(this, value);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RewiredEventSystem*))(Il2CppBase() + 0x268DC90))(this);
	}
	template <typename T = void> T iFixBaseProxy_Update() {
		return ((T (*)(RewiredEventSystem*))(Il2CppBase() + 0x268DEE0))(this);
	}

};

}
