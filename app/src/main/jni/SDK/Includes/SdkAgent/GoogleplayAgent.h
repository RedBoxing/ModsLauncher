#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace SdkAgent {

class GoogleplayAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SdkAgent", "GoogleplayAgent"));
	}

	template <typename T = int32_t> static T& mainThreadId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _genericPayProcesser() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> static T get_IsMainThread() {
		return ((T (*)(void *))(Il2CppBase() + 0x18183C8))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GoogleplayAgent*))(Il2CppBase() + 0x181847C))(this);
	}
	template <typename T = void> T initPay(Il2CppString* extra) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x18185A4))(this, extra);
	}
	template <typename T = void> T onPayInfoSuccess(Il2CppString* data) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x18187DC))(this, data);
	}
	template <typename T = void> T onPayInfoFail(Il2CppString* data) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x1818BCC))(this, data);
	}
	template <typename T = void> T initPayInfo() {
		return ((T (*)(GoogleplayAgent*))(Il2CppBase() + 0x1818CA8))(this);
	}
	template <typename T = void> T initOrder(Il2CppString* extra) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x1818F8C))(this, extra);
	}
	template <typename T = void> T OnRestoreSuccess(Il2CppString* itemId) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x181907C))(this, itemId);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GoogleplayAgent*))(Il2CppBase() + 0x18192A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_initPay(Il2CppString* P0) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x18192A8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_onPayInfoSuccess(Il2CppString* P0) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x18192B0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_onPayInfoFail(Il2CppString* P0) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x18192B8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_initPayInfo() {
		return ((T (*)(GoogleplayAgent*))(Il2CppBase() + 0x18192C0))(this);
	}
	template <typename T = void> T iFixBaseProxy_initOrder(Il2CppString* P0) {
		return ((T (*)(GoogleplayAgent*, Il2CppString*))(Il2CppBase() + 0x18192C8))(this, P0);
	}

};

}
