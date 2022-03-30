#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchInvitationsResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FetchInvitationsResponse"));
	}


	template <typename T = bool> T RequestSucceeded() {
		return ((T (*)(FetchInvitationsResponse*))(Il2CppBase() + 0x2AFFFE0))(this);
	}
	template <typename T = uintptr_t> T ResponseStatus() {
		return ((T (*)(FetchInvitationsResponse*))(Il2CppBase() + 0x2B0004C))(this);
	}
	template <typename T = void*> T Invitations() {
		return ((T (*)(FetchInvitationsResponse*))(Il2CppBase() + 0x2B000B8))(this);
	}
	template <typename T = void> T CallDispose(uintptr_t selfPointer) {
		return ((T (*)(FetchInvitationsResponse*, uintptr_t))(Il2CppBase() + 0x2B001C8))(this, selfPointer);
	}
	template <typename T = uintptr_t> static T FromPointer(uintptr_t pointer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2B0024C))(0, pointer);
	}
	template <typename T = uintptr_t> T Invitationsb__3_0(uintptr_t index) {
		return ((T (*)(FetchInvitationsResponse*, uintptr_t))(Il2CppBase() + 0x2B00320))(this, index);
	}

};

}
