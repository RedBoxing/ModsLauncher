#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass140
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass14_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& invitationId() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T FindInvitationWithIdb__0(uintptr_t allMatches) {
		return ((T (*)(cDisplayClass140*, uintptr_t))(Il2CppBase() + 0x2838920))(this, allMatches);
	}

};

}
