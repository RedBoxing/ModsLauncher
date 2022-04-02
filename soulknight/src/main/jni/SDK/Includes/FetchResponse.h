#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FetchResponse"));
	}


	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchResponse*, uintptr_t))(Il2CppBase() + 0x2AFC2D0))(this, selfPointer);
	}
	template <typename T = uintptr_t> T GetPlayer() {
		return ((T (*)(FetchResponse*))(Il2CppBase() + 0x2AFB5E0))(this);
	}
	template <typename T = uintptr_t> T Status() {
		return ((T (*)(FetchResponse*))(Il2CppBase() + 0x2AFB574))(this);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t selfPointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2AFC358))(0, selfPointer);
	}

};

}
