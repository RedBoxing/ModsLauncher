#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ChillyRoom.Net.Http {

class AsyncHttpClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ChillyRoom.Net.Http", "AsyncHttpClient"));
	}

	template <typename T = Il2CppString*> T& _IP() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint16_t> T& _Port() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& client() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T get_IP() {
		return ((T (*)(AsyncHttpClient*))(Il2CppBase() + 0x187CA14))(this);
	}
	template <typename T = uint16_t> T get_Port() {
		return ((T (*)(AsyncHttpClient*))(Il2CppBase() + 0x187CA74))(this);
	}
	template <typename T = void*> T PostAsync(Il2CppString* url, Il2CppArray<uintptr_t>* data) {
		return ((T (*)(AsyncHttpClient*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x187CC44))(this, url, data);
	}
	template <typename T = void*> T GetAsync(Il2CppString* url) {
		return ((T (*)(AsyncHttpClient*, Il2CppString*))(Il2CppBase() + 0x187CDA8))(this, url);
	}

};

}
