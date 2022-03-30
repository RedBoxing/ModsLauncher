#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Mirror {

class GeneratedNetworkCode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Mirror", "GeneratedNetworkCode"));
	}


	template <typename T = void> static T _WriteArrayInt32_None(uintptr_t writer, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x41F534C))(0, writer, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T _ReadArrayInt32_None(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41F54D0))(0, reader);
	}

};

}
