#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchAllResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FetchAllResponse"));
	}


	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(FetchAllResponse*))(Il2CppBase() + 0x4607DB0))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(FetchAllResponse*))(Il2CppBase() + 0x4607E1C))(this);
	}
	template <typename T = void*> T Data() {
		return ((T (*)(FetchAllResponse*))(Il2CppBase() + 0x4607E88))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchAllResponse*, uintptr_t))(Il2CppBase() + 0x4607F98))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x460801C))(0, pointer);
	}
	template <typename T = uintptr_t> T Datab__3_0(uintptr_t index) {
		return ((T (*)(FetchAllResponse*, uintptr_t))(Il2CppBase() + 0x4608100))(this, index);
	}

};

}
