#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class Request
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "Request"));
	}

	template <typename T = bool> static T& LogAllRequests() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& VerboseLogging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppString*> static T& unityVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& operatingSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& cookieJar() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& method() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& protocol() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& byteStream() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& uri() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& EOL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> T& response() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isDone() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& maximumRetryCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& acceptGzip() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& useCache() {
		return *(T*)((uintptr_t)this + 0x49);
	}
	template <typename T = uintptr_t> T& exception() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& responseTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& synchronous() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& bufferSize() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& completedCallback() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<Il2CppString*>*>*> T& headers() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& etags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& sizes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T AddHeader(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(Request*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2A504))(this, name, value);
	}
	template <typename T = Il2CppString*> T GetHeader(Il2CppString* name) {
		return ((T (*)(Request*, Il2CppString*))(Il2CppBase() + 0x1A2AB24))(this, name);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetHeaders() {
		return ((T (*)(Request*))(Il2CppBase() + 0x1A2AC74))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetHeaders_1(Il2CppString* name) {
		return ((T (*)(Request*, Il2CppString*))(Il2CppBase() + 0x1A2AFF4))(this, name);
	}
	template <typename T = void> T SetHeader(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(Request*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A279EC))(this, name, value);
	}
	template <typename T = void> T ConnectCallback(uintptr_t result) {
		return ((T (*)(Request*, uintptr_t))(Il2CppBase() + 0x1A2B15C))(this, result);
	}
	template <typename T = uintptr_t> T GetResponse(uintptr_t client) {
		return ((T (*)(Request*, uintptr_t))(Il2CppBase() + 0x1A2B378))(this, client);
	}
	template <typename T = void> T Send(uintptr_t client, void* callback) {
		return ((T (*)(Request*, uintptr_t, void*))(Il2CppBase() + 0x1A2B4B8))(this, client, callback);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(Request*, Il2CppString*))(Il2CppBase() + 0x1A2C238))(this, value);
	}
	template <typename T = bool> static T ValidateServerCertificate(uintptr_t sender, uintptr_t certificate, uintptr_t chain, uintptr_t sslPolicyErrors) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A2C324))(0, sender, certificate, chain, sslPolicyErrors);
	}
	template <typename T = void> T WriteToStream(uintptr_t outputStream) {
		return ((T (*)(Request*, uintptr_t))(Il2CppBase() + 0x1A2C478))(this, outputStream);
	}
	template <typename T = Il2CppString*> T InfoString(bool verbose) {
		return ((T (*)(Request*, bool))(Il2CppBase() + 0x1A2CC34))(this, verbose);
	}

};

}
