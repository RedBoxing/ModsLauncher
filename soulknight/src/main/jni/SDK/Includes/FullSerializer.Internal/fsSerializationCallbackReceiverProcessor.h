#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsSerializationCallbackReceiverProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsSerializationCallbackReceiverProcessor"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsSerializationCallbackReceiverProcessor*, uintptr_t))(Il2CppBase() + 0x2D0D644))(this, type);
	}
	template <typename T = void> T OnBeforeSerialize(uintptr_t storageType, uintptr_t instance) {
		return ((T (*)(fsSerializationCallbackReceiverProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D730))(this, storageType, instance);
	}
	template <typename T = void> T OnAfterDeserialize(uintptr_t storageType, uintptr_t instance) {
		return ((T (*)(fsSerializationCallbackReceiverProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D910))(this, storageType, instance);
	}
	template <typename T = bool> T iFixBaseProxy_CanProcess(uintptr_t P0) {
		return ((T (*)(fsSerializationCallbackReceiverProcessor*, uintptr_t))(Il2CppBase() + 0x2D0DAFC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnBeforeSerialize(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsSerializationCallbackReceiverProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0DB00))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnAfterDeserialize(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsSerializationCallbackReceiverProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0DB04))(this, P0, P1);
	}

};

}
