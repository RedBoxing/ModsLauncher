#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsKeyValuePairConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsKeyValuePairConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsKeyValuePairConverter*, uintptr_t))(Il2CppBase() + 0x2D06FF4))(this, type);
	}
	template <typename T = bool> T RequestCycleSupport(uintptr_t storageType) {
		return ((T (*)(fsKeyValuePairConverter*, uintptr_t))(Il2CppBase() + 0x2D07154))(this, storageType);
	}
	template <typename T = bool> T RequestInheritanceSupport(uintptr_t storageType) {
		return ((T (*)(fsKeyValuePairConverter*, uintptr_t))(Il2CppBase() + 0x2D071C8))(this, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsKeyValuePairConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0723C))(this, data, instance, storageType);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsKeyValuePairConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D07660))(this, instance, serialized, storageType);
	}
	template <typename T = bool> T iFixBaseProxy_RequestCycleSupport(uintptr_t P0) {
		return ((T (*)(fsKeyValuePairConverter*, uintptr_t))(Il2CppBase() + 0x2D07DD4))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_RequestInheritanceSupport(uintptr_t P0) {
		return ((T (*)(fsKeyValuePairConverter*, uintptr_t))(Il2CppBase() + 0x2D07DD8))(this, P0);
	}

};

}
