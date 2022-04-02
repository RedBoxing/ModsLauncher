#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class ViewManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "ViewManager"));
	}

	template <typename T = void*> static T& ShowingViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& PersistViews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T PushView(uintptr_t view) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EF178))(0, view);
	}
	template <typename T = uintptr_t> static T PopView() {
		return ((T (*)(void *))(Il2CppBase() + 0x43EF244))(0);
	}
	template <typename T = uintptr_t> static T PeekView() {
		return ((T (*)(void *))(Il2CppBase() + 0x43EF304))(0);
	}
	template <typename T = void> static T RemoveView(uintptr_t view) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EF3C4))(0, view);
	}
	template <typename T = bool> static T ExistPersistView(uintptr_t view) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EF548))(0, view);
	}
	template <typename T = void> static T AddPersistView(uintptr_t view) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EF66C))(0, view);
	}
	template <typename T = void> static T RemovePersistView(uintptr_t view) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EF7C0))(0, view);
	}
	template <typename T = bool> static T RunNavigationEvent(uintptr_t navigationEvent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EF8E4))(0, navigationEvent);
	}

};

}
