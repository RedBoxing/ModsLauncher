#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace GooglePlayGames.BasicApi {

class InvitationReceivedDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GooglePlayGames.BasicApi", "InvitationReceivedDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t invitation, bool shouldAutoAccept) {
		return ((T (*)(InvitationReceivedDelegate*, uintptr_t, bool))(Il2CppBase() + 0x35BF1D0))(this, invitation, shouldAutoAccept);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t invitation, bool shouldAutoAccept, uintptr_t callback, uintptr_t object) {
		return ((T (*)(InvitationReceivedDelegate*, uintptr_t, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x35BF950))(this, invitation, shouldAutoAccept, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(InvitationReceivedDelegate*, uintptr_t))(Il2CppBase() + 0x35BF9F0))(this, result);
	}

};

}
