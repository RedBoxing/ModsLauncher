#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class Response
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "Response"));
	}

	template <typename T = uintptr_t> T& request() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& status() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bytes() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<Il2CppString*>*>*> T& headers() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(Response*))(Il2CppBase() + 0x1A2D744))(this);
	}
	template <typename T = Il2CppString*> T get_Asset() {
		return ((T (*)(Response*))(Il2CppBase() + 0x1A2E8CC))(this);
	}
	template <typename T = uintptr_t> T get_Object() {
		return ((T (*)(Response*))(Il2CppBase() + 0x1A2E984))(this);
	}
	template <typename T = uintptr_t> T get_Array() {
		return ((T (*)(Response*))(Il2CppBase() + 0x1A2EAC0))(this);
	}
	template <typename T = void> T AddHeader(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(Response*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A2EBFC))(this, name, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetHeaders() {
		return ((T (*)(Response*))(Il2CppBase() + 0x1A2D3C4))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetHeaders_1(Il2CppString* name) {
		return ((T (*)(Response*, Il2CppString*))(Il2CppBase() + 0x1A2EDB8))(this, name);
	}
	template <typename T = Il2CppString*> T GetHeader(Il2CppString* name) {
		return ((T (*)(Response*, Il2CppString*))(Il2CppBase() + 0x1A280F8))(this, name);
	}
	template <typename T = Il2CppString*> T ReadLine(uintptr_t stream) {
		return ((T (*)(Response*, uintptr_t))(Il2CppBase() + 0x1A2EF04))(this, stream);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadKeyValue(uintptr_t stream) {
		return ((T (*)(Response*, uintptr_t))(Il2CppBase() + 0x1A2F124))(this, stream);
	}
	template <typename T = void> T ReadFromStream(uintptr_t inputStream) {
		return ((T (*)(Response*, uintptr_t))(Il2CppBase() + 0x1A2F33C))(this, inputStream);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T UnZip(uintptr_t output) {
		return ((T (*)(Response*, uintptr_t))(Il2CppBase() + 0x1A2FBF4))(this, output);
	}

};

}
