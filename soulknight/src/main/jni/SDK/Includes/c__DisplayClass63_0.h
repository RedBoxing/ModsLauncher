#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass630
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass63_0"));
	}

	template <typename T = uintptr_t> T& invitationDelegate() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T RegisterInvitationDelegateb__0(uintptr_t invitation, bool autoAccept) {
		return ((T (*)(cDisplayClass630*, uintptr_t, bool))(Il2CppBase() + 0x3591D74))(this, invitation, autoAccept);
	}

};

}
