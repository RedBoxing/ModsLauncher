#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RealTimeRoomResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RealTimeRoomResponse"));
	}


	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(RealTimeRoomResponse*))(Il2CppBase() + 0x2B00424))(this);
	}
	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(RealTimeRoomResponse*))(Il2CppBase() + 0x2B00490))(this);
	}
	template <typename T = uintptr_t> T Room() {
		return ((T (*)(RealTimeRoomResponse*))(Il2CppBase() + 0x2B004FC))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(RealTimeRoomResponse*, uintptr_t))(Il2CppBase() + 0x2B005CC))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B00650))(0, pointer);
	}

};

}
