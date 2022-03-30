#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityRealName.UI {

class UnityRealNameUiUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityRealName.UI", "UnityRealNameUiUtil"));
	}


	template <typename T = uintptr_t> static T GetRealNameCanvas() {
		return ((T (*)(void *))(Il2CppBase() + 0x43F86A0))(0);
	}
	template <typename T = uintptr_t> static T GetView() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = uintptr_t> static T GetRealNameView(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, parent);
	}
	template <typename T = uintptr_t> static T InstantiateRealNameView() {
		return ((T (*)(void *))(Il2CppBase() + 0x0))(0);
	}
	template <typename T = uintptr_t> static T InstantiateRealNameView_1(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x0))(0, parent);
	}

};

}
