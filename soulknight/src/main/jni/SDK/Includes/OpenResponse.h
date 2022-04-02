#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OpenResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenResponse"));
	}


	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(OpenResponse*))(Il2CppBase() + 0x4608208))(this);
	}
	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(OpenResponse*))(Il2CppBase() + 0x4608274))(this);
	}
	template <typename T = Il2CppString*> T ConflictId() {
		return ((T (*)(OpenResponse*))(Il2CppBase() + 0x46082E0))(this);
	}
	template <typename T = uintptr_t> T Data() {
		return ((T (*)(OpenResponse*))(Il2CppBase() + 0x4608408))(this);
	}
	template <typename T = uintptr_t> T ConflictOriginal() {
		return ((T (*)(OpenResponse*))(Il2CppBase() + 0x460851C))(this);
	}
	template <typename T = uintptr_t> T ConflictUnmerged() {
		return ((T (*)(OpenResponse*))(Il2CppBase() + 0x4608630))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(OpenResponse*, uintptr_t))(Il2CppBase() + 0x4608744))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46087C8))(0, pointer);
	}
	template <typename T = uintptr_t> T ConflictIdb__3_0(Il2CppArray<uintptr_t>* out_string, uintptr_t out_size) {
		return ((T (*)(OpenResponse*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46088AC))(this, out_string, out_size);
	}

};

}
