#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Abo {

class HttpUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Abo", "HttpUtil"));
	}


	template <typename T = void> static T SendGet(Il2CppString* _url, Il2CppDictionary<Il2CppString*, uintptr_t>* parameters, uintptr_t executor, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, void*, void*))(Il2CppBase() + 0x19FC8C4))(0, _url, parameters, executor, onComplete, onError);
	}
	template <typename T = uintptr_t> static T SendGet_1(Il2CppString* _url, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, void*, void*))(Il2CppBase() + 0x19FCCC4))(0, _url, onComplete, onError);
	}
	template <typename T = Il2CppString*> static T GetParams(Il2CppDictionary<Il2CppString*, uintptr_t>* parameters) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x19FCA38))(0, parameters);
	}
	template <typename T = void> static T SendPost(Il2CppString* _url, Il2CppDictionary<Il2CppString*, uintptr_t>* parameters, uintptr_t executor, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, void*, void*))(Il2CppBase() + 0x19FCDEC))(0, _url, parameters, executor, onComplete, onError);
	}
	template <typename T = uintptr_t> static T SendPost_1(Il2CppString* _url, uintptr_t _wForm, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, void*, void*))(Il2CppBase() + 0x19FD1AC))(0, _url, _wForm, onComplete, onError);
	}
	template <typename T = void> static T SendPost_2(Il2CppString* _url, Il2CppDictionary<Il2CppString*, Il2CppString*>* parameters, uintptr_t executor, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*, uintptr_t, void*, void*))(Il2CppBase() + 0x19FD2F8))(0, _url, parameters, executor, onComplete, onError);
	}
	template <typename T = uintptr_t> static T SendPost_3(Il2CppString* _url, uintptr_t _wForm, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, void*, void*))(Il2CppBase() + 0x19FD53C))(0, _url, _wForm, onComplete, onError);
	}
	template <typename T = void> static T SendPost_4(Il2CppString* _url, Il2CppArray<uintptr_t>* data, uintptr_t executor, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, void*, void*))(Il2CppBase() + 0x19FD688))(0, _url, data, executor, onComplete, onError);
	}
	template <typename T = void> static T SendPut(Il2CppString* _url, Il2CppArray<uintptr_t>* bytes, uintptr_t executor, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t, void*, void*))(Il2CppBase() + 0x19FDA48))(0, _url, bytes, executor, onComplete, onError);
	}
	template <typename T = uintptr_t> static T SendPut_1(Il2CppString* _url, Il2CppArray<uintptr_t>* bytes, void* onComplete, void* onError) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, void*, void*))(Il2CppBase() + 0x19FDB48))(0, _url, bytes, onComplete, onError);
	}

};

}
