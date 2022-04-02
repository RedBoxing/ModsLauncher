#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TargetFinger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetFinger"));
	}

	template <typename T = Il2CppString*> T& rect_path() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B4A6C))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B4B50))(this);
	}
	template <typename T = void> T MoveToKnight() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B51BC))(this);
	}
	template <typename T = void> T MoveToUnlock() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B524C))(this);
	}
	template <typename T = void> T MoveToCloudSave() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B52DC))(this);
	}
	template <typename T = void> T MoveToTask() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B536C))(this);
	}
	template <typename T = void> T MoveToTask1() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B53FC))(this);
	}
	template <typename T = void> T MoveToAcceptChallenge() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B548C))(this);
	}
	template <typename T = void> T MoveToPos(Il2CppString* rect_path) {
		return ((T (*)(TargetFinger*, Il2CppString*))(Il2CppBase() + 0x43B4BB4))(this, rect_path);
	}
	template <typename T = uintptr_t> T GetRectTransform(Il2CppString* rect_path) {
		return ((T (*)(TargetFinger*, Il2CppString*))(Il2CppBase() + 0x43B551C))(this, rect_path);
	}
	template <typename T = void> T DestroyEvent(uintptr_t e) {
		return ((T (*)(TargetFinger*, uintptr_t))(Il2CppBase() + 0x43B56DC))(this, e);
	}
	template <typename T = void> T DestroyGameObject() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B55D8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(TargetFinger*))(Il2CppBase() + 0x43B5750))(this);
	}
	template <typename T = uintptr_t> static T CreateTargetFinger() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B5834))(0);
	}
	template <typename T = uintptr_t> static T CreateSimpleTargetFingerWithParent(uintptr_t parent) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43B5948))(0, parent);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B5A58))(0);
	}

};

}
