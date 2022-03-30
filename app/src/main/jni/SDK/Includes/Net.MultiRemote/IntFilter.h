#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Net.MultiRemote {

class IntFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Net.MultiRemote", "IntFilter"));
	}

	template <typename T = void*> T& equals() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> T& not() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& has() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& notIn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& lt() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& lte() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& gt() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& gte() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void*> T get_equals() {
		return ((T (*)(IntFilter*))(Il2CppBase() + 0x16F2960))(this);
	}
	template <typename T = void> T set_equals(void* value) {
		return ((T (*)(IntFilter*, void*))(Il2CppBase() + 0x16F2968))(this, value);
	}
	template <typename T = void*> T get_not() {
		return ((T (*)(IntFilter*))(Il2CppBase() + 0x16F2970))(this);
	}
	template <typename T = void> T set_not(void* value) {
		return ((T (*)(IntFilter*, void*))(Il2CppBase() + 0x16F2978))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_has() {
		return ((T (*)(IntFilter*))(Il2CppBase() + 0x16F2980))(this);
	}
	template <typename T = void> T set_has(Il2CppList<int32_t>* value) {
		return ((T (*)(IntFilter*, Il2CppList<int32_t>*))(Il2CppBase() + 0x16F2988))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_notIn() {
		return ((T (*)(IntFilter*))(Il2CppBase() + 0x16F2990))(this);
	}
	template <typename T = void> T set_notIn(Il2CppList<int32_t>* value) {
		return ((T (*)(IntFilter*, Il2CppList<int32_t>*))(Il2CppBase() + 0x16F2998))(this, value);
	}
	template <typename T = void*> T get_lt() {
		return ((T (*)(IntFilter*))(Il2CppBase() + 0x16F29A0))(this);
	}
	template <typename T = void> T set_lt(void* value) {
		return ((T (*)(IntFilter*, void*))(Il2CppBase() + 0x16F29A8))(this, value);
	}
	template <typename T = void*> T get_lte() {
		return ((T (*)(IntFilter*))(Il2CppBase() + 0x16F29B0))(this);
	}
	template <typename T = void> T set_lte(void* value) {
		return ((T (*)(IntFilter*, void*))(Il2CppBase() + 0x16F29B8))(this, value);
	}
	template <typename T = void*> T get_gt() {
		return ((T (*)(IntFilter*))(Il2CppBase() + 0x16F29C0))(this);
	}
	template <typename T = void> T set_gt(void* value) {
		return ((T (*)(IntFilter*, void*))(Il2CppBase() + 0x16F29C8))(this, value);
	}
	template <typename T = int32_t> T get_gte() {
		return ((T (*)(IntFilter*))(Il2CppBase() + 0x16F29D0))(this);
	}
	template <typename T = void> T set_gte(int32_t value) {
		return ((T (*)(IntFilter*, int32_t))(Il2CppBase() + 0x16F29D8))(this, value);
	}

};

}
