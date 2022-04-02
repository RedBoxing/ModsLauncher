#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace UnityRealName.Example {

class RealNameProgram
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UnityRealName.Example", "RealNameProgram"));
	}

	template <typename T = bool> static T& IsInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& hasTAAddition() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> static T CreateRealNameProgram() {
		return ((T (*)(void *))(Il2CppBase() + 0x43F7F20))(0);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RealNameProgram*))(Il2CppBase() + 0x43F800C))(this);
	}
	template <typename T = void> T EventShowRealNameWindow(Il2CppString* calledFrom) {
		return ((T (*)(RealNameProgram*, Il2CppString*))(Il2CppBase() + 0x43F9064))(this, calledFrom);
	}
	template <typename T = void> T EventHideRealNameWindow() {
		return ((T (*)(RealNameProgram*))(Il2CppBase() + 0x43F9274))(this);
	}
	template <typename T = void> T EventShowPlayAdditionWindow(Il2CppString* tips) {
		return ((T (*)(RealNameProgram*, Il2CppString*))(Il2CppBase() + 0x43F9394))(this, tips);
	}
	template <typename T = void> T EventShowPurchaseAdditionWindow(Il2CppString* tips) {
		return ((T (*)(RealNameProgram*, Il2CppString*))(Il2CppBase() + 0x43F9544))(this, tips);
	}
	template <typename T = void> T EventAdditon() {
		return ((T (*)(RealNameProgram*))(Il2CppBase() + 0x43F95BC))(this);
	}
	template <typename T = void> T EventVerifyRealNameResult(void* data) {
		return ((T (*)(RealNameProgram*, void*))(Il2CppBase() + 0x43F96A8))(this, data);
	}
	template <typename T = void> T EventRemindMinute(int32_t minute) {
		return ((T (*)(RealNameProgram*, int32_t))(Il2CppBase() + 0x43F97E0))(this, minute);
	}
	template <typename T = void> T EventAfterViewShow() {
		return ((T (*)(RealNameProgram*))(Il2CppBase() + 0x43F98DC))(this);
	}
	template <typename T = void> T EventAfterViewHide() {
		return ((T (*)(RealNameProgram*))(Il2CppBase() + 0x43F99F8))(this);
	}
	template <typename T = void> T EnterPending() {
		return ((T (*)(RealNameProgram*))(Il2CppBase() + 0x43F9B38))(this);
	}
	template <typename T = void> static T AfterVerifyRealNameResultEvent(void* result) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x43F9C70))(0, result);
	}
	template <typename T = void> T EventOnChoseSkinConfirm(uintptr_t choseSkinConfirm) {
		return ((T (*)(RealNameProgram*, uintptr_t))(Il2CppBase() + 0x43F9DD0))(this, choseSkinConfirm);
	}

};

}
