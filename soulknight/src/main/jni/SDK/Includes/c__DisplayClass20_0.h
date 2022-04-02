#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass200
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass20_0"));
	}

	template <typename T = Il2CppString*> T& participantId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& onFoundParticipantAndMatch() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& match() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& onFailure() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T FindEqualVersionMatchWithParticipantb__0(uintptr_t foundMatch) {
		return ((T (*)(cDisplayClass200*, uintptr_t))(Il2CppBase() + 0x28395E8))(this, foundMatch);
	}

};

}
