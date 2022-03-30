#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsEnumConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsEnumConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsEnumConverter*, uintptr_t))(Il2CppBase() + 0x451BB50))(this, type);
	}
	template <typename T = bool> T RequestCycleSupport(uintptr_t storageType) {
		return ((T (*)(fsEnumConverter*, uintptr_t))(Il2CppBase() + 0x451BC2C))(this, storageType);
	}
	template <typename T = bool> T RequestInheritanceSupport(uintptr_t storageType) {
		return ((T (*)(fsEnumConverter*, uintptr_t))(Il2CppBase() + 0x451BCA0))(this, storageType);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(fsEnumConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x451BD14))(this, data, storageType);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsEnumConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x451BE0C))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsEnumConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451C328))(this, data, instance, storageType);
	}
	template <typename T = bool> static T ArrayContains(Il2CppArray<uintptr_t>* values, uintptr_t value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, values, value);
	}
	template <typename T = bool> T iFixBaseProxy_RequestCycleSupport(uintptr_t P0) {
		return ((T (*)(fsEnumConverter*, uintptr_t))(Il2CppBase() + 0x451C8A8))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_RequestInheritanceSupport(uintptr_t P0) {
		return ((T (*)(fsEnumConverter*, uintptr_t))(Il2CppBase() + 0x451C8B0))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsEnumConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x451C8B8))(this, P0, P1);
	}

};

}
