#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SnapshotSelectUIResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SnapshotSelectUIResponse"));
	}


	template <typename T = uintptr_t> T RequestStatus() {
		return ((T (*)(SnapshotSelectUIResponse*))(Il2CppBase() + 0x4608D78))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(SnapshotSelectUIResponse*))(Il2CppBase() + 0x4608DE4))(this);
	}
	template <typename T = uintptr_t> T Data() {
		return ((T (*)(SnapshotSelectUIResponse*))(Il2CppBase() + 0x4608E50))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(SnapshotSelectUIResponse*, uintptr_t))(Il2CppBase() + 0x4608F60))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4608FE4))(0, pointer);
	}

};

}
