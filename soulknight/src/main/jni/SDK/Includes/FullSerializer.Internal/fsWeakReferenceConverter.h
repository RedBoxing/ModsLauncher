#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsWeakReferenceConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsWeakReferenceConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t))(Il2CppBase() + 0x2D10B84))(this, type);
	}
	template <typename T = bool> T RequestCycleSupport(uintptr_t storageType) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t))(Il2CppBase() + 0x2D10C5C))(this, storageType);
	}
	template <typename T = bool> T RequestInheritanceSupport(uintptr_t storageType) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t))(Il2CppBase() + 0x2D10CD0))(this, storageType);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D10D44))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D11050))(this, data, instance, storageType);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D11468))(this, data, storageType);
	}
	template <typename T = bool> T iFixBaseProxy_RequestCycleSupport(uintptr_t P0) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t))(Il2CppBase() + 0x2D11530))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_RequestInheritanceSupport(uintptr_t P0) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t))(Il2CppBase() + 0x2D11534))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsWeakReferenceConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D11538))(this, P0, P1);
	}

};

}
