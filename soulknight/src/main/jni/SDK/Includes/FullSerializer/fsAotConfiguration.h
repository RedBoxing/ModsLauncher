#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FullSerializer {

class fsAotConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FullSerializer", "fsAotConfiguration"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& aotTypes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& outputDirectory() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T TryFindEntry(uintptr_t type, uintptr_t* result) {
		return ((T (*)(fsAotConfiguration*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2D1398C))(this, type, result);
	}
	template <typename T = void> T UpdateOrAddEntry(uintptr_t entry) {
		return ((T (*)(fsAotConfiguration*, uintptr_t))(Il2CppBase() + 0x2D13B5C))(this, entry);
	}

};

}
