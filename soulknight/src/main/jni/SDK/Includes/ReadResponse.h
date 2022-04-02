#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReadResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReadResponse"));
	}


	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(ReadResponse*))(Il2CppBase() + 0x4608958))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(ReadResponse*))(Il2CppBase() + 0x46089C4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Data() {
		return ((T (*)(ReadResponse*))(Il2CppBase() + 0x4608A30))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(ReadResponse*, uintptr_t))(Il2CppBase() + 0x4608B64))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4608BE8))(0, pointer);
	}
	template <typename T = uintptr_t> T Datab__3_0(Il2CppArray<uintptr_t>* out_bytes, uintptr_t out_size) {
		return ((T (*)(ReadResponse*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4608CCC))(this, out_bytes, out_size);
	}

};

}
