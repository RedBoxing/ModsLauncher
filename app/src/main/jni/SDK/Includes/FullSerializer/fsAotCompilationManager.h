#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsAotCompilationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsAotCompilationManager"));
	}

	template <typename T = void*> static T& AotCandidateTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T HasMember(uintptr_t versionInfo, uintptr_t member) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D1153C))(0, versionInfo, member);
	}
	template <typename T = bool> static T IsAotModelUpToDate(uintptr_t currentModel, uintptr_t aotModel) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D11758))(0, currentModel, aotModel);
	}
	template <typename T = Il2CppString*> static T RunAotCompilationForType(uintptr_t config, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D11C3C))(0, config, type);
	}
	template <typename T = Il2CppString*> static T EmitVersionInfo(Il2CppString* prefix, uintptr_t type, Il2CppArray<uintptr_t>* members, bool isConstructorPublic) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x2D132F8))(0, prefix, type, members, isConstructorPublic);
	}
	template <typename T = Il2CppString*> static T GetConverterString(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D13754))(0, member);
	}
	template <typename T = Il2CppString*> static T GetQualifiedConverterNameForType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2D13858))(0, type);
	}
	template <typename T = Il2CppString*> static T GenerateDirectConverterForTypeInCSharp(uintptr_t type, Il2CppArray<uintptr_t>* members, bool isConstructorPublic) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x2D11D7C))(0, type, members, isConstructorPublic);
	}

};

}
