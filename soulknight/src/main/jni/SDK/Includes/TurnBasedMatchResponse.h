#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TurnBasedMatchResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TurnBasedMatchResponse"));
	}


	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(TurnBasedMatchResponse*))(Il2CppBase() + 0x460BEC8))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(TurnBasedMatchResponse*))(Il2CppBase() + 0x460BF34))(this);
	}
	template <typename T = uintptr_t> T Match() {
		return ((T (*)(TurnBasedMatchResponse*))(Il2CppBase() + 0x460BFA0))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(TurnBasedMatchResponse*, uintptr_t))(Il2CppBase() + 0x460C074))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x460C0F8))(0, pointer);
	}

};

}
