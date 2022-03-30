#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnMultiplayerInvitationEventCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnMultiplayerInvitationEventCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, Il2CppString* arg1, uintptr_t arg2, uintptr_t arg3) {
		return ((T (*)(OnMultiplayerInvitationEventCallback*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CF9C4))(this, arg0, arg1, arg2, arg3);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, Il2CppString* arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnMultiplayerInvitationEventCallback*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35CFE94))(this, arg0, arg1, arg2, arg3, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnMultiplayerInvitationEventCallback*, uintptr_t))(Il2CppBase() + 0x35CFF60))(this, result);
	}

};

}
