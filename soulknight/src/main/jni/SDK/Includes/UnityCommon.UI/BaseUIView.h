#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class BaseUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "BaseUIView"));
	}

	template <typename T = bool> T& Active() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& hasInitView() {
		return *(T*)((uintptr_t)this + 0x59);
	}

	template <typename T = bool> T get_Active() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x43E90B4))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(BaseUIView*, bool))(Il2CppBase() + 0x43E90BC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x43E90C8))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(BaseUIView*))(Il2CppBase() + 0x43E9148))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(BaseUIView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43E91AC))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(BaseUIView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43E9274))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(BaseUIView*, uintptr_t))(Il2CppBase() + 0x43E933C))(this, navigationEvent);
	}

};

}
