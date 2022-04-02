#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsResult"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyStringArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _success() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _messages() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& Success() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T AddMessage(Il2CppString* message) {
		return ((T (*)(fsResult*, Il2CppString*))(Il2CppBase() + 0x152A38C))(this, message);
	}
	template <typename T = void> T AddMessages(uintptr_t result) {
		return ((T (*)(fsResult*, uintptr_t))(Il2CppBase() + 0x152A394))(this, result);
	}
	template <typename T = uintptr_t> T Merge(uintptr_t other) {
		return ((T (*)(fsResult*, uintptr_t))(Il2CppBase() + 0x152A39C))(this, other);
	}
	template <typename T = uintptr_t> static T Warn(Il2CppString* warning) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D1BB9C))(0, warning);
	}
	template <typename T = uintptr_t> static T Fail(Il2CppString* warning) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D02EF8))(0, warning);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0317C))(0, a, b);
	}
	template <typename T = bool> T get_Failed() {
		return ((T (*)(fsResult*))(Il2CppBase() + 0x152A3A4))(this);
	}
	template <typename T = bool> T get_Succeeded() {
		return ((T (*)(fsResult*))(Il2CppBase() + 0x152A3AC))(this);
	}
	template <typename T = bool> T get_HasWarnings() {
		return ((T (*)(fsResult*))(Il2CppBase() + 0x152A3B4))(this);
	}
	template <typename T = uintptr_t> T AssertSuccess() {
		return ((T (*)(fsResult*))(Il2CppBase() + 0x152A3BC))(this);
	}
	template <typename T = uintptr_t> T AssertSuccessWithoutWarnings() {
		return ((T (*)(fsResult*))(Il2CppBase() + 0x152A3C4))(this);
	}
	template <typename T = uintptr_t> T get_AsException() {
		return ((T (*)(fsResult*))(Il2CppBase() + 0x152A3CC))(this);
	}
	template <typename T = void*> T get_RawMessages() {
		return ((T (*)(fsResult*))(Il2CppBase() + 0x152A3D4))(this);
	}
	template <typename T = Il2CppString*> T get_FormattedMessages() {
		return ((T (*)(fsResult*))(Il2CppBase() + 0x152A3DC))(this);
	}

};

}
