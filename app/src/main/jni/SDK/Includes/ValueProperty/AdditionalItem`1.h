#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace ValueProperty {

class AdditionalItem1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ValueProperty", "AdditionalItem`1"));
	}

	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& AdditionalType() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = int32_t> T get_Order() {
		return ((T (*)(AdditionalItem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Value() {
		return ((T (*)(AdditionalItem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_AdditionalType() {
		return ((T (*)(AdditionalItem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_Key() {
		return ((T (*)(AdditionalItem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T Equals(void* other) {
		return ((T (*)(AdditionalItem1*, void*))(Il2CppBase() + 0x0))(this, other);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(AdditionalItem1*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AdditionalItem1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T CompareTo(void* other) {
		return ((T (*)(AdditionalItem1*, void*))(Il2CppBase() + 0x0))(this, other);
	}

};

}
