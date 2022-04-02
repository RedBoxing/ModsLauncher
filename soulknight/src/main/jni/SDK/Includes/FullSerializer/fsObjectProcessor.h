#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsObjectProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsObjectProcessor"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsObjectProcessor*, uintptr_t))(Il2CppBase() + 0x2D0D370))(this, type);
	}
	template <typename T = void> T OnBeforeSerialize(uintptr_t storageType, uintptr_t instance) {
		return ((T (*)(fsObjectProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D430))(this, storageType, instance);
	}
	template <typename T = void> T OnAfterSerialize(uintptr_t storageType, uintptr_t instance, uintptr_t data) {
		return ((T (*)(fsObjectProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D4AC))(this, storageType, instance, data);
	}
	template <typename T = void> T OnBeforeDeserialize(uintptr_t storageType, uintptr_t data) {
		return ((T (*)(fsObjectProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1B8AC))(this, storageType, data);
	}
	template <typename T = void> T OnBeforeDeserializeAfterInstanceCreation(uintptr_t storageType, uintptr_t instance, uintptr_t data) {
		return ((T (*)(fsObjectProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D53C))(this, storageType, instance, data);
	}
	template <typename T = void> T OnAfterDeserialize(uintptr_t storageType, uintptr_t instance) {
		return ((T (*)(fsObjectProcessor*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0D5CC))(this, storageType, instance);
	}

};

}
