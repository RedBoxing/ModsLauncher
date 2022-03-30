#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsNullableConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsNullableConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsNullableConverter*, uintptr_t))(Il2CppBase() + 0x2D0824C))(this, type);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsNullableConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D083AC))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsNullableConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D08468))(this, data, instance, storageType);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(fsNullableConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D08524))(this, data, storageType);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsNullableConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D085A8))(this, P0, P1);
	}

};

}
