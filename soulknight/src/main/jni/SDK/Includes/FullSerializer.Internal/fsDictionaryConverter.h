#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsDictionaryConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsDictionaryConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsDictionaryConverter*, uintptr_t))(Il2CppBase() + 0x451A188))(this, type);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(fsDictionaryConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x451A274))(this, data, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance_, uintptr_t storageType) {
		return ((T (*)(fsDictionaryConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451A368))(this, data, instance_, storageType);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance_, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsDictionaryConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x451B180))(this, instance_, serialized, storageType);
	}
	template <typename T = uintptr_t> T AddItemToDictionary(uintptr_t dictionary, uintptr_t key, uintptr_t value) {
		return ((T (*)(fsDictionaryConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x451AD4C))(this, dictionary, key, value);
	}
	template <typename T = void> static T GetKeyValueTypes(uintptr_t dictionaryType, uintptr_t* keyStorageType, uintptr_t* valueStorageType) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x451AB90))(0, dictionaryType, keyStorageType, valueStorageType);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsDictionaryConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x451BB48))(this, P0, P1);
	}

};

}
