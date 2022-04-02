#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer.Internal {

class fsVersionManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer.Internal", "fsVersionManager"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, void*>*> static T& _cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetVersionImportPath(Il2CppString* currentVersion, uintptr_t targetVersion, uintptr_t* path) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D0EF24))(0, currentVersion, targetVersion, path);
	}
	template <typename T = bool> static T GetVersionImportPathRecursive(Il2CppList<uintptr_t>* path, Il2CppString* currentVersion, uintptr_t current) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2D0F2BC))(0, path, currentVersion, current);
	}
	template <typename T = void*> static T GetVersionedType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D0F480))(0, type);
	}
	template <typename T = void> static T VerifyConstructors(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D0FC00))(0, type);
	}
	template <typename T = void> static T VerifyUniqueVersionStrings(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D0F8A0))(0, type);
	}

};

}
