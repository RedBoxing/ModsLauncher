#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsTypeCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsTypeCache"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& _cachedTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& _assembliesByName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& _assembliesByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T OnAssemblyLoaded(uintptr_t sender, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D0DE5C))(0, sender, args);
	}
	template <typename T = bool> static T TryDirectTypeLookup(Il2CppString* assemblyName, Il2CppString* typeName, uintptr_t* type) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2D0E0E8))(0, assemblyName, typeName, type);
	}
	template <typename T = bool> static T TryIndirectTypeLookup(Il2CppString* typeName, uintptr_t* type) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2D0E258))(0, typeName, type);
	}
	template <typename T = void> static T Reset() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D0E558))(0);
	}
	template <typename T = uintptr_t> static T GetType(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2D0E620))(0, name);
	}
	template <typename T = uintptr_t> static T GetType_1(Il2CppString* name, Il2CppString* assemblyHint) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D0E6C8))(0, name, assemblyHint);
	}

};

}
