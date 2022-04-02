#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class IView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "IView"));
	}


	template <typename T = bool> T get_Active() {
		return ((T (*)(IView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(IView*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(IView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(IView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, objects);
	}
	template <typename T = bool> T OnEvent(uintptr_t navigationEvent) {
		return ((T (*)(IView*, uintptr_t))(Il2CppBase() + 0x0))(this, navigationEvent);
	}

};

}
