#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsBaseConverter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsBaseConverter"));
	}

	template <typename T = uintptr_t> T& Serializer() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T CreateInstance(uintptr_t data, uintptr_t storageType) {
		return ((T (*)(fsBaseConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D04064))(this, data, storageType);
	}
	template <typename T = bool> T RequestCycleSupport(uintptr_t storageType) {
		return ((T (*)(fsBaseConverter*, uintptr_t))(Il2CppBase() + 0x2D04920))(this, storageType);
	}
	template <typename T = bool> T RequestInheritanceSupport(uintptr_t storageType) {
		return ((T (*)(fsBaseConverter*, uintptr_t))(Il2CppBase() + 0x2D04A98))(this, storageType);
	}
	template <typename T = uintptr_t> T TrySerialize(uintptr_t instance, uintptr_t* serialized, uintptr_t storageType) {
		return ((T (*)(fsBaseConverter*, uintptr_t, uintptr_t*, uintptr_t))(Il2CppBase() + 0x0))(this, instance, serialized, storageType);
	}
	template <typename T = uintptr_t> T TryDeserialize(uintptr_t data, uintptr_t instance, uintptr_t storageType) {
		return ((T (*)(fsBaseConverter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, instance, storageType);
	}
	template <typename T = uintptr_t> T FailExpectedType(uintptr_t data, Il2CppArray<uintptr_t>* types) {
		return ((T (*)(fsBaseConverter*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2D14210))(this, data, types);
	}
	template <typename T = uintptr_t> T CheckType(uintptr_t data, uintptr_t type) {
		return ((T (*)(fsBaseConverter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0616C))(this, data, type);
	}
	template <typename T = uintptr_t> T CheckKey(uintptr_t data, Il2CppString* key, uintptr_t* subitem) {
		return ((T (*)(fsBaseConverter*, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2D075B0))(this, data, key, subitem);
	}
	template <typename T = uintptr_t> T CheckKey_1(Il2CppDictionary<Il2CppString*, uintptr_t>* data, Il2CppString* key, uintptr_t* subitem) {
		return ((T (*)(fsBaseConverter*, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2D14664))(this, data, key, subitem);
	}
	template <typename T = uintptr_t> T SerializeMember(Il2CppDictionary<Il2CppString*, uintptr_t>* data, uintptr_t overrideConverterType, Il2CppString* name, uintptr_t value) {
		return ((T (*)(fsBaseConverter*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, data, overrideConverterType, name, value);
	}
	template <typename T = uintptr_t> T DeserializeMember(Il2CppDictionary<Il2CppString*, uintptr_t>* data, uintptr_t overrideConverterType, Il2CppString* name, uintptr_t* value) {
		return ((T (*)(fsBaseConverter*, Il2CppDictionary<Il2CppString*, uintptr_t>*, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x0))(this, data, overrideConverterType, name, value);
	}

};

}
