#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.OurUtils {

class PlayGamesHelperObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.OurUtils", "PlayGamesHelperObject"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& sIsDummy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& sQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& localQueue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& sQueueEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppList<void*>*> static T& sPauseCallbackList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppList<void*>*> static T& sFocusCallbackList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> static T CreateObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x460FD94))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x460FFD8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x4610094))(this);
	}
	template <typename T = void> static T RunCoroutine(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46101A8))(0, action);
	}
	template <typename T = void> static T RunOnGameThread(uintptr_t action) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x460EEE8))(0, action);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PlayGamesHelperObject*))(Il2CppBase() + 0x4610324))(this);
	}
	template <typename T = void> T OnApplicationFocus(bool focused) {
		return ((T (*)(PlayGamesHelperObject*, bool))(Il2CppBase() + 0x46105D0))(this, focused);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(PlayGamesHelperObject*, bool))(Il2CppBase() + 0x46108C0))(this, paused);
	}
	template <typename T = void> static T AddFocusCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4610BB0))(0, callback);
	}
	template <typename T = bool> static T RemoveFocusCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4610CE4))(0, callback);
	}
	template <typename T = void> static T AddPauseCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4610DB0))(0, callback);
	}
	template <typename T = bool> static T RemovePauseCallback(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x4610EE4))(0, callback);
	}

};

}
