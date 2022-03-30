#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsPrimitiveConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsPrimitiveConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsPrimitiveConverter*, uintptr_t))(Il2CppBase() + 0x2D09D70))(this, type);
	}
	template <typename T = bool> T RequestCycleSupport(uintptr_t storageType) {
		return ((T (*)(fsPrimitiveConverter*, uintptr_t))(Il2CppBase() + 0x2D09EE4))(this, storageType);
	}
	template <typename T = bool> T RequestInheritanceSupport(uintptr_t storageType) {
		return ((T (*)(fsPrimitiveConverter*, uintptr_t))(Il2CppBase() + 0x2D09F58))(this, storageType);
	}
	template <typename T = bool> static T UseBool(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D09FCC))(0, type);
	}
	template <typename T = bool> static T UseInt64(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D0A090))(0, type);
	}
	template <typename T = bool> static T UseDouble(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D0A350))(0, type);
	}
	template <typename T = bool> static T UseString(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D0A4BC))(0, type);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsPrimitiveConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D0A5E4))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t storage, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsPrimitiveConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0AE7C))(this, storage, instance, storageType);
	}
	template <typename T = bool> T iFixBaseProxy_RequestCycleSupport(uintptr_t P0) {
		return ((T (*)(fsPrimitiveConverter*, uintptr_t))(Il2CppBase() + 0x2D0BA18))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_RequestInheritanceSupport(uintptr_t P0) {
		return ((T (*)(fsPrimitiveConverter*, uintptr_t))(Il2CppBase() + 0x2D0BA1C))(this, P0);
	}

};

}
