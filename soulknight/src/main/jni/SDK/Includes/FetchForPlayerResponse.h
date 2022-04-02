#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchForPlayerResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FetchForPlayerResponse"));
	}


	template <typename T = uintptr_t> T Status() {
		return ((T (*)(FetchForPlayerResponse*))(Il2CppBase() + 0x4609408))(this);
	}
	template <typename T = uintptr_t> T PlayerStats() {
		return ((T (*)(FetchForPlayerResponse*))(Il2CppBase() + 0x4609474))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchForPlayerResponse*, uintptr_t))(Il2CppBase() + 0x4609534))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x46095B8))(0, pointer);
	}

};

}
