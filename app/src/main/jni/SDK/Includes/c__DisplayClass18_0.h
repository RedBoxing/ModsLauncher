#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass180
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass18_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& 9__1() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T TakeTurnb__0(uintptr_t pendingParticipant, uintptr_t foundMatch) {
		return ((T (*)(cDisplayClass180*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2839084))(this, pendingParticipant, foundMatch);
	}
	template <typename T = void> T TakeTurnb__1(uintptr_t result) {
		return ((T (*)(cDisplayClass180*, uintptr_t))(Il2CppBase() + 0x2839160))(this, result);
	}

};

}
