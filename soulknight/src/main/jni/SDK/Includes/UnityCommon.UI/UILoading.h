#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityCommon.UI {

class UILoading
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityCommon.UI", "UILoading"));
	}

	template <typename T = uintptr_t> T& _simpleAnimator() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _coroutine() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> static T ShowLoadingWindow(uintptr_t parent, float destroyTime) {
		return ((T (*)(void *, uintptr_t, float))(Il2CppBase() + 0x43EAC18))(0, parent, destroyTime);
	}
	template <typename T = void> static T HideLoadingWindow(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43EAD88))(0, parent);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x43EAED0))(this);
	}
	template <typename T = void> T ShowView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UILoading*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EB0B4))(this, objects);
	}
	template <typename T = void> T HideView(Il2CppArray<uintptr_t>* objects) {
		return ((T (*)(UILoading*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EB308))(this, objects);
	}
	template <typename T = uintptr_t> T DelayDestory(float seconds) {
		return ((T (*)(UILoading*, float))(Il2CppBase() + 0x43EB228))(this, seconds);
	}
	template <typename T = void> T iFixBaseProxy_InitView() {
		return ((T (*)(UILoading*))(Il2CppBase() + 0x43EB418))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShowView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UILoading*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EB41C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_HideView(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(UILoading*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43EB420))(this, P0);
	}

};

}
