#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsISerializationCallbacks
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsISerializationCallbacks"));
	}


	template <typename T = void> T OnBeforeSerialize(uintptr_t storageType) {
		return ((T (*)(fsISerializationCallbacks*, uintptr_t))(Il2CppBase() + 0x0))(this, storageType);
	}
	template <typename T = void> T OnAfterSerialize(uintptr_t storageType, uintptr_t data) {
		return ((T (*)(fsISerializationCallbacks*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, storageType, data);
	}
	template <typename T = void> T OnBeforeDeserialize(uintptr_t storageType, uintptr_t data) {
		return ((T (*)(fsISerializationCallbacks*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, storageType, data);
	}
	template <typename T = void> T OnAfterDeserialize(uintptr_t storageType) {
		return ((T (*)(fsISerializationCallbacks*, uintptr_t))(Il2CppBase() + 0x0))(this, storageType);
	}

};

}
