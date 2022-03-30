#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MatchInboxUIResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MatchInboxUIResponse"));
	}


	template <typename T = uintptr_t> T UiStatus() {
		return ((T (*)(MatchInboxUIResponse*))(Il2CppBase() + 0x460B430))(this);
	}
	template <typename T = uintptr_t> T Match() {
		return ((T (*)(MatchInboxUIResponse*))(Il2CppBase() + 0x460B49C))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(MatchInboxUIResponse*, uintptr_t))(Il2CppBase() + 0x460B574))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x460B5F8))(0, pointer);
	}

};

}
