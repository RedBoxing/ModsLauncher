#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Member
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Member"));
	}

	template <typename T = Il2CppString*> T& MemberName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& JsonName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& StorageType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& OverrideConverterType() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Member*, uintptr_t))(Il2CppBase() + 0x152A320))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Member*))(Il2CppBase() + 0x152A328))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D11654))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D14020))(0, a, b);
	}
	template <typename T = bool> T iFixBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(Member*, uintptr_t))(Il2CppBase() + 0x152A330))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(Member*))(Il2CppBase() + 0x152A338))(this);
	}

};

}
