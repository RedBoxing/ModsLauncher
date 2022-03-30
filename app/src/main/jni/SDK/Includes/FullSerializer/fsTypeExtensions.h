#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsTypeExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsTypeExtensions"));
	}


	template <typename T = Il2CppString*> static T CSharpName(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4424970))(0, type);
	}
	template <typename T = Il2CppString*> static T CSharpName_1(uintptr_t type, bool includeNamespace, bool ensureSafeDeclarationName) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x4424F88))(0, type, includeNamespace, ensureSafeDeclarationName);
	}
	template <typename T = Il2CppString*> static T CSharpName_2(uintptr_t type, bool includeNamespace) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x44249D4))(0, type, includeNamespace);
	}

};

}
