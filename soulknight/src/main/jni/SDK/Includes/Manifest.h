#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Manifest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Manifest"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& files() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_files() {
		return ((T (*)(Manifest*))(Il2CppBase() + 0x4478D04))(this);
	}
	template <typename T = void> T set_files(Il2CppList<uintptr_t>* value) {
		return ((T (*)(Manifest*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x447911C))(this, value);
	}

};

}
