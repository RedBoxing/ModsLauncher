#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom.Utils {

class EventSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom.Utils", "EventSystem"));
	}

	template <typename T = uintptr_t> static T& loom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& mEventTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T CreateBroadcastSignatureException(uint32_t eventType) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x1E72614))(0, eventType);
	}
	template <typename T = void> static T OnListenerAdding(uint32_t eventType, uintptr_t listenerBeingAdded) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x1E72774))(0, eventType, listenerBeingAdded);
	}
	template <typename T = void> static T OnListenerRemoving(uint32_t eventType, uintptr_t listenerBeingRemoved) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x1E72ACC))(0, eventType, listenerBeingRemoved);
	}
	template <typename T = void> static T OnListenerRemoved(uint32_t eventType) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x1E72DC8))(0, eventType);
	}
	template <typename T = void> static T OnBroadcasting(uint32_t eventType) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x1E72EF0))(0, eventType);
	}
	template <typename T = void> static T AddListener(uintptr_t eventType, uintptr_t handler) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E72F4C))(0, eventType, handler);
	}
	template <typename T = void> static T AddListener_1(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T AddListener_2(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T AddListener_3(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T AddListener_4(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T AddListener_5(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T AddListener_6(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T RemoveListener(uintptr_t eventType, uintptr_t handler) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E73168))(0, eventType, handler);
	}
	template <typename T = void> static T RemoveListener_1(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T RemoveListener_2(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T RemoveListener_3(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T RemoveListener_4(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T RemoveListener_5(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T RemoveListener_6(uintptr_t eventType, void* handler) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x0))(0, eventType, handler);
	}
	template <typename T = void> static T Broadcast(uintptr_t eventType, bool onMainThread) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1E7338C))(0, eventType, onMainThread);
	}
	template <typename T = void> static T Broadcast_1(uintptr_t eventType, uintptr_t arg1, bool onMainThread) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(0, eventType, arg1, onMainThread);
	}
	template <typename T = void> static T Broadcast_2(uintptr_t eventType, uintptr_t arg1, uintptr_t arg2, bool onMainThread) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(0, eventType, arg1, arg2, onMainThread);
	}
	template <typename T = void> static T Broadcast_3(uintptr_t eventType, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, bool onMainThread) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(0, eventType, arg1, arg2, arg3, onMainThread);
	}
	template <typename T = void> static T Broadcast_4(uintptr_t eventType, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4, bool onMainThread) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(0, eventType, arg1, arg2, arg3, arg4, onMainThread);
	}
	template <typename T = void> static T Broadcast_5(uintptr_t eventType, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, bool onMainThread) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(0, eventType, arg1, arg2, arg3, arg4, arg5, onMainThread);
	}
	template <typename T = void> static T Broadcast_6(uintptr_t eventType, uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, uintptr_t arg6, bool onMainThread) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x0))(0, eventType, arg1, arg2, arg3, arg4, arg5, arg6, onMainThread);
	}

};

}
