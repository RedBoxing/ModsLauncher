#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.Google.Android.Gms.Common.Api {

class GoogleApiClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.Google.Android.Gms.Common.Api", "GoogleApiClient"));
	}

	template <typename T = Il2CppString*> static T& CLASS_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T getContext() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x20723B8))(this);
	}
	template <typename T = void> T connect() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2072474))(this);
	}
	template <typename T = void> T disconnect() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2072528))(this);
	}
	template <typename T = void> T dump(Il2CppString* arg_string_1, uintptr_t arg_object_2, uintptr_t arg_object_3, Il2CppArray<uintptr_t>* arg_string_4) {
		return ((T (*)(GoogleApiClient*, Il2CppString*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x20725DC))(this, arg_string_1, arg_object_2, arg_object_3, arg_string_4);
	}
	template <typename T = uintptr_t> T blockingConnect(int64_t arg_long_1, uintptr_t arg_object_2) {
		return ((T (*)(GoogleApiClient*, int64_t, uintptr_t))(Il2CppBase() + 0x20727F4))(this, arg_long_1, arg_object_2);
	}
	template <typename T = uintptr_t> T blockingConnect_1() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2072998))(this);
	}
	template <typename T = void*> T clearDefaultAccountAndReconnect() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2072A54))(this);
	}
	template <typename T = uintptr_t> T getConnectionResult(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x2072B10))(this, arg_object_1);
	}
	template <typename T = int32_t> T getSessionId() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2072C34))(this);
	}
	template <typename T = bool> T isConnecting() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2072CF0))(this);
	}
	template <typename T = bool> T isConnectionCallbacksRegistered(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x2072DAC))(this, arg_object_1);
	}
	template <typename T = bool> T isConnectionFailedListenerRegistered(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x2072ED0))(this, arg_object_1);
	}
	template <typename T = void> T reconnect() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2072FF4))(this);
	}
	template <typename T = void> T registerConnectionCallbacks(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x20730A8))(this, arg_object_1);
	}
	template <typename T = void> T registerConnectionFailedListener(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x20731C4))(this, arg_object_1);
	}
	template <typename T = void> T stopAutoManage(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x20732E0))(this, arg_object_1);
	}
	template <typename T = void> T unregisterConnectionCallbacks(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x20733FC))(this, arg_object_1);
	}
	template <typename T = void> T unregisterConnectionFailedListener(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x2073518))(this, arg_object_1);
	}
	template <typename T = bool> T hasConnectedApi(uintptr_t arg_object_1) {
		return ((T (*)(GoogleApiClient*, uintptr_t))(Il2CppBase() + 0x2073634))(this, arg_object_1);
	}
	template <typename T = uintptr_t> T getLooper() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2073758))(this);
	}
	template <typename T = bool> T isConnected() {
		return ((T (*)(GoogleApiClient*))(Il2CppBase() + 0x2073814))(this);
	}

};

}
