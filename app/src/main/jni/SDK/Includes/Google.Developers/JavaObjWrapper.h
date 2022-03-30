#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Google.Developers {

class JavaObjWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Google.Developers", "JavaObjWrapper"));
	}

	template <typename T = uintptr_t> T& raw() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& cachedRawClass() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_RawObject() {
		return ((T (*)(JavaObjWrapper*))(Il2CppBase() + 0x443BC5C))(this);
	}
	template <typename T = uintptr_t> T get_RawClass() {
		return ((T (*)(JavaObjWrapper*))(Il2CppBase() + 0x443BCBC))(this);
	}
	template <typename T = void> T CreateInstance(Il2CppString* clazzName, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(JavaObjWrapper*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443BD78))(this, clazzName, args);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ConstructArgArray(Il2CppArray<uintptr_t>* theArgs) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443BF24))(0, theArgs);
	}
	template <typename T = uintptr_t> static T StaticInvokeObjectCall(Il2CppString* type, Il2CppString* name, Il2CppString* sig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, type, name, sig, args);
	}
	template <typename T = void> static T StaticInvokeCallVoid(Il2CppString* type, Il2CppString* name, Il2CppString* sig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443C6E0))(0, type, name, sig, args);
	}
	template <typename T = uintptr_t> static T GetStaticObjectField(Il2CppString* clsName, Il2CppString* name, Il2CppString* sig) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(0, clsName, name, sig);
	}
	template <typename T = int32_t> static T GetStaticIntField(Il2CppString* clsName, Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443C81C))(0, clsName, name);
	}
	template <typename T = Il2CppString*> static T GetStaticStringField(Il2CppString* clsName, Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443C8E4))(0, clsName, name);
	}
	template <typename T = float> static T GetStaticFloatField(Il2CppString* clsName, Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443C9AC))(0, clsName, name);
	}
	template <typename T = void> T InvokeCallVoid(Il2CppString* name, Il2CppString* sig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(JavaObjWrapper*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x443CA74))(this, name, sig, args);
	}
	template <typename T = uintptr_t> T InvokeCall(Il2CppString* name, Il2CppString* sig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(JavaObjWrapper*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, name, sig, args);
	}
	template <typename T = uintptr_t> static T StaticInvokeCall(Il2CppString* type, Il2CppString* name, Il2CppString* sig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, type, name, sig, args);
	}
	template <typename T = uintptr_t> T InvokeObjectCall(Il2CppString* name, Il2CppString* sig, Il2CppArray<uintptr_t>* theArgs) {
		return ((T (*)(JavaObjWrapper*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, name, sig, theArgs);
	}

};

}
