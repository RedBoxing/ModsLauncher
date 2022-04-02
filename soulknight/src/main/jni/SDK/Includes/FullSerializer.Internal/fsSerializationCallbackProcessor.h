#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsSerializationCallbackProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsSerializationCallbackProcessor"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t))(Il2CppBase() + 0x2D0C96C))(this, type);
	}
	template <typename T = void> T OnBeforeSerialize(uintptr_t storageType, uintptr_t instance) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0CA58))(this, storageType, instance);
	}
	template <typename T = void> T OnAfterSerialize(uintptr_t storageType, uintptr_t instance, uintptr_t data) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0CC3C))(this, storageType, instance, data);
	}
	template <typename T = void> T OnBeforeDeserializeAfterInstanceCreation(uintptr_t storageType, uintptr_t instance, uintptr_t data) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0CE30))(this, storageType, instance, data);
	}
	template <typename T = void> T OnAfterDeserialize(uintptr_t storageType, uintptr_t instance) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D174))(this, storageType, instance);
	}
	template <typename T = bool> T iFixBaseProxy_CanProcess(uintptr_t P0) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t))(Il2CppBase() + 0x2D0D36C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnBeforeSerialize(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D42C))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnAfterSerialize(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D4A8))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_OnBeforeDeserializeAfterInstanceCreation(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D538))(this, P0, P1, P2);
	}
	template <typename T = void> T iFixBaseProxy_OnAfterDeserialize(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsSerializationCallbackProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D5C8))(this, P0, P1);
	}

};

}
