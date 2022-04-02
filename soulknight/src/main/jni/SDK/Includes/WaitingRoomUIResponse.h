#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WaitingRoomUIResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaitingRoomUIResponse"));
	}


	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(WaitingRoomUIResponse*))(Il2CppBase() + 0x2B00ABC))(this);
	}
	template <typename T = uintptr_t> T Room() {
		return ((T (*)(WaitingRoomUIResponse*))(Il2CppBase() + 0x2B00B28))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(WaitingRoomUIResponse*, uintptr_t))(Il2CppBase() + 0x2B00BFC))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B00C80))(0, pointer);
	}

};

}
