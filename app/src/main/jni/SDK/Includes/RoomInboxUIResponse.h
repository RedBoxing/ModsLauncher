#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomInboxUIResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomInboxUIResponse"));
	}


	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(RoomInboxUIResponse*))(Il2CppBase() + 0x2B007AC))(this);
	}
	template <typename T = uintptr_t> T Invitation() {
		return ((T (*)(RoomInboxUIResponse*))(Il2CppBase() + 0x2B00818))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(RoomInboxUIResponse*, uintptr_t))(Il2CppBase() + 0x2B008EC))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B00970))(0, pointer);
	}

};

}
