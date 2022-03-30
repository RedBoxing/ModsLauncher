#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal.Converters {

class UnityEventConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal.Converters", "UnityEvent_Converter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(UnityEventConverter*, uintptr_t))(Il2CppBase() + 0x4513984))(this, type);
	}
	template <typename T = bool> T RequestCycleSupport(uintptr_t storageType) {
		return ((T (*)(UnityEventConverter*, uintptr_t))(Il2CppBase() + 0x4513ADC))(this, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(UnityEventConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4513B50))(this, data, instance, storageType);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(UnityEventConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x4513CD0))(this, instance, serialized, storageType);
	}
	template <typename T = bool> T iFixBaseProxy_RequestCycleSupport(uintptr_t P0) {
		return ((T (*)(UnityEventConverter*, uintptr_t))(Il2CppBase() + 0x4513DD0))(this, P0);
	}

};

}
