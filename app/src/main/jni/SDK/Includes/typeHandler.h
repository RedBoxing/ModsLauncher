#pragma once
#include "Il2Cpp/Il2Cpp.h"

class typeHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "typeHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t item, Il2CppString* error) {
		return ((T (*)(typeHandler*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x26E6244))(this, item, error);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t item, Il2CppString* error, uintptr_t callback, uintptr_t object) {
		return ((T (*)(typeHandler*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x26E6848))(this, item, error, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(typeHandler*, uintptr_t))(Il2CppBase() + 0x26E68E0))(this, result);
	}

};

}
