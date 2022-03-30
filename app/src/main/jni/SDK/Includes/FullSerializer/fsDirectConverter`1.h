#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsDirectConverter1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsDirectConverter`1"));
	}


	template <typename T = uintptr_t> T get_ModelType() {
		return ((T (*)(fsDirectConverter1*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsDirectConverter1*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x0))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsDirectConverter1*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, instance, storageType);
	}
	template <typename T = uintptr_t> T DoSerialize(uintptr_t model, Il2CppDictionary<Il2CppString*, uintptr_t>* serialized) {
		return ((T (*)(fsDirectConverter1*, uintptr_t, Il2CppDictionary<Il2CppString*, uintptr_t>*))(Il2CppBase() + 0x0))(this, model, serialized);
	}
	template <typename T = uintptr_t> T DoDeserialize(Il2CppDictionary<Il2CppString*, uintptr_t>* data, uintptr_t model) {
		return ((T (*)(fsDirectConverter1*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(this, data, model);
	}

};

}
