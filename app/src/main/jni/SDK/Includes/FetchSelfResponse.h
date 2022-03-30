#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchSelfResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FetchSelfResponse"));
	}


	template <typename T = uintptr_t> T Status() {
		return ((T (*)(FetchSelfResponse*))(Il2CppBase() + 0x2AFC4A4))(this);
	}
	template <typename T = uintptr_t> T Self() {
		return ((T (*)(FetchSelfResponse*))(Il2CppBase() + 0x2AFC510))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchSelfResponse*, uintptr_t))(Il2CppBase() + 0x2AFC5CC))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t selfPointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AFC654))(0, selfPointer);
	}

};

}
