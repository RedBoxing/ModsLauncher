#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CommitResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CommitResponse"));
	}


	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(CommitResponse*))(Il2CppBase() + 0x46079E8))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(CommitResponse*))(Il2CppBase() + 0x4607A54))(this);
	}
	template <typename T = uintptr_t> T Data() {
		return ((T (*)(CommitResponse*))(Il2CppBase() + 0x4607AC0))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(CommitResponse*, uintptr_t))(Il2CppBase() + 0x4607BD0))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4607C54))(0, pointer);
	}

};

}
