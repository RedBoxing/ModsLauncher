#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsIEnumerableConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsIEnumerableConverter"));
	}


	template <typename T = bool> T CanProcess(uintptr_t type) {
		return ((T (*)(fsIEnumerableConverter*, uintptr_t))(Il2CppBase() + 0x2D04B78))(this, type);
	}
	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(fsIEnumerableConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D04E68))(this, data, storageType);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance_, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsIEnumerableConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x2D04F54))(this, instance_, serialized, storageType);
	}
	template <typename T = bool> T IsStack(uintptr_t type) {
		return ((T (*)(fsIEnumerableConverter*, uintptr_t))(Il2CppBase() + 0x2D05A0C))(this, type);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance_, uintptr_t storageType) {
		return ((T (*)(fsIEnumerableConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D05BEC))(this, data, instance_, storageType);
	}
	template <typename T = int32_t> static T HintSize(uintptr_t collection) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D055C8))(0, collection);
	}
	template <typename T = uintptr_t> static T GetElementType(uintptr_t objectType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D05418))(0, objectType);
	}
	template <typename T = void> static T TryClear(uintptr_t type, uintptr_t instance) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D06730))(0, type, instance);
	}
	template <typename T = int32_t> static T TryGetExistingSize(uintptr_t type, uintptr_t instance) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D06838))(0, type, instance);
	}
	template <typename T = uintptr_t> static T GetAddMethod(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D04C90))(0, type);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_CreateInstance(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(fsIEnumerableConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D06FF0))(this, P0, P1);
	}

};

}
