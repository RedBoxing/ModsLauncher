#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsVersionedType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsVersionedType"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Ancestors() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& VersionString() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ModelType() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T Migrate(uintptr_t ancestorInstance) {
		return ((T (*)(fsVersionedType*, uintptr_t))(Il2CppBase() + 0x152A084))(this, ancestorInstance);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(fsVersionedType*))(Il2CppBase() + 0x152A08C))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D10630))(0, a, b);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1074C))(0, a, b);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(fsVersionedType*, uintptr_t))(Il2CppBase() + 0x152A094))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(fsVersionedType*))(Il2CppBase() + 0x152A09C))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(fsVersionedType*))(Il2CppBase() + 0x152A0A4))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(fsVersionedType*, uintptr_t))(Il2CppBase() + 0x152A0AC))(this, P0);
	}
	template <typename T = int32_t> T iFixBaseProxy_GetHashCode() {
		return ((T (*)(fsVersionedType*))(Il2CppBase() + 0x152A0B4))(this);
	}

};

}
