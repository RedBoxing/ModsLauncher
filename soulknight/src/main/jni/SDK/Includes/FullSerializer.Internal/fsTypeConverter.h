#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsTypeConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsTypeConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsTypeConverter*, uintptr_t))(Il2CppBase() + 0x2D0E940))(this, type);
	}
	template <typename T = bool> T RequestCycleSupport(uintptr_t type) {
		return ((T (*)(fsTypeConverter*, uintptr_t))(Il2CppBase() + 0x2D0EA2C))(this, type);
	}
	template <typename T = bool> T RequestInheritanceSupport(uintptr_t type) {
		return ((T (*)(fsTypeConverter*, uintptr_t))(Il2CppBase() + 0x2D0EAA0))(this, type);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsTypeConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D0EB14))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsTypeConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0ECB4))(this, data, instance, storageType);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(fsTypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0EE94))(this, data, storageType);
	}
	template <typename T = bool> T iFixBaseProxy_RequestCycleSupport(uintptr_t P0) {
		return ((T (*)(fsTypeConverter*, uintptr_t))(Il2CppBase() + 0x2D0EF18))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_RequestInheritanceSupport(uintptr_t P0) {
		return ((T (*)(fsTypeConverter*, uintptr_t))(Il2CppBase() + 0x2D0EF1C))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsTypeConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0EF20))(this, P0, P1);
	}

};

}
