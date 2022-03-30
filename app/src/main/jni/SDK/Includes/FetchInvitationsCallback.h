#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FetchInvitationsCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FetchInvitationsCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(FetchInvitationsCallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x357AF3C))(this, arg0, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FetchInvitationsCallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357B3A4))(this, arg0, arg1, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(FetchInvitationsCallback*, uintptr_t))(Il2CppBase() + 0x357B444))(this, result);
	}

};

}
