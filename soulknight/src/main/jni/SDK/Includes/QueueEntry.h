#pragma once
#include "Il2Cpp/Il2Cpp.h"

class QueueEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QueueEntry"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& queueActionType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& response() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& uidCounter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(QueueEntry*))(Il2CppBase() + 0x205F540))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(QueueEntry*, int32_t))(Il2CppBase() + 0x2062B9C))(this, value);
	}
	template <typename T = uintptr_t> T get_queueActionType() {
		return ((T (*)(QueueEntry*))(Il2CppBase() + 0x205F624))(this);
	}
	template <typename T = void> T set_queueActionType(uintptr_t value) {
		return ((T (*)(QueueEntry*, uintptr_t))(Il2CppBase() + 0x2062BA4))(this, value);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(QueueEntry*))(Il2CppBase() + 0x205FEBC))(this);
	}
	template <typename T = void> T set_state(uintptr_t value) {
		return ((T (*)(QueueEntry*, uintptr_t))(Il2CppBase() + 0x2062BAC))(this, value);
	}
	template <typename T = uintptr_t> T get_response() {
		return ((T (*)(QueueEntry*))(Il2CppBase() + 0x2060CD0))(this);
	}
	template <typename T = void> T set_response(uintptr_t value) {
		return ((T (*)(QueueEntry*, uintptr_t))(Il2CppBase() + 0x2062BB4))(this, value);
	}
	template <typename T = int32_t> static T get_nextId() {
		return ((T (*)(void *))(Il2CppBase() + 0x2062BBC))(0);
	}
	template <typename T = void> T Confirm(uintptr_t response) {
		return ((T (*)(QueueEntry*, uintptr_t))(Il2CppBase() + 0x205F548))(this, response);
	}
	template <typename T = void> T Cancel() {
		return ((T (*)(QueueEntry*))(Il2CppBase() + 0x205F5C0))(this);
	}

};

}
