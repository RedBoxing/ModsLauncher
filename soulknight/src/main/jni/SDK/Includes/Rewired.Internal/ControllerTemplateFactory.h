#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.Internal {

class ControllerTemplateFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.Internal", "ControllerTemplateFactory"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _defaultTemplateTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _defaultTemplateInterfaceTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T get_templateTypes() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E84B5C))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_templateInterfaceTypes() {
		return ((T (*)(void *))(Il2CppBase() + 0x1E84C00))(0);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t typeGuid, uintptr_t payload) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x1E84CA4))(0, typeGuid, payload);
	}

};

}
