#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HttpClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HttpClient"));
	}

	template <typename T = uint32_t> static T& Compress_Flag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& ReLogin_Flag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& IP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint16_t> T& Port() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_sendBuf() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& client() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Authtoken() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T SetToken(Il2CppString* authToken) {
		return ((T (*)(HttpClient*, Il2CppString*))(Il2CppBase() + 0x4207AC4))(this, authToken);
	}
	template <typename T = uintptr_t> T GetProxyClient(Il2CppString* proxyHost, uint16_t proxyPort, Il2CppString* extra) {
		return ((T (*)(HttpClient*, Il2CppString*, uint16_t, Il2CppString*))(Il2CppBase() + 0x42078C8))(this, proxyHost, proxyPort, extra);
	}
	template <typename T = void> T CallRpc(uintptr_t rid, uintptr_t func, uintptr_t callback, void* exp) {
		return ((T (*)(HttpClient*, uintptr_t, uintptr_t, uintptr_t, void*))(Il2CppBase() + 0x4207BE8))(this, rid, func, callback, exp);
	}
	template <typename T = void> T _Post(uintptr_t rid, Il2CppString* urlkey, uintptr_t callback, void* exp) {
		return ((T (*)(HttpClient*, uintptr_t, Il2CppString*, uintptr_t, void*))(Il2CppBase() + 0x420842C))(this, rid, urlkey, callback, exp);
	}
	template <typename T = uintptr_t> T _Decompress(Il2CppArray<uintptr_t>* buf) {
		return ((T (*)(HttpClient*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42087A0))(this, buf);
	}

};

}
