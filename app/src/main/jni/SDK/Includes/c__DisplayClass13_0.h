#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass130
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass13_0"));
	}

	template <typename T = Il2CppString*> T& invitationId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& 9__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T AcceptInvitationb__0(uintptr_t invitation) {
		return ((T (*)(cDisplayClass130*, uintptr_t))(Il2CppBase() + 0x2838728))(this, invitation);
	}
	template <typename T = void> T AcceptInvitationb__1(uintptr_t status, uintptr_t match) {
		return ((T (*)(cDisplayClass130*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28388A4))(this, status, match);
	}

};

}
