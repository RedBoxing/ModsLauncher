#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsForwardConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsForwardConverter"));
	}

	template <typename T = Il2CppString*> T& _memberName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsForwardConverter*, uintptr_t))(Il2CppBase() + 0x2D028F0))(this, type);
	}
	template <typename T = uintptr_t> T GetProperty(uintptr_t instance, uintptr_t* property) {
		return ((T (*)(fsForwardConverter*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D029B8))(this, instance, property);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsForwardConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D02FC8))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsForwardConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D03638))(this, data, instance, storageType);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(fsForwardConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D03B20))(this, data, storageType);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsForwardConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D04060))(this, P0, P1);
	}

};

}
