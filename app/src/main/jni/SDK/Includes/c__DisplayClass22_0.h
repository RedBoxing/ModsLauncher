#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass220
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass22_0"));
	}

	template <typename T = uintptr_t> T& outcome() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& 9__1() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Finishb__0(uintptr_t foundMatch) {
		return ((T (*)(cDisplayClass220*, uintptr_t))(Il2CppBase() + 0x283995C))(this, foundMatch);
	}
	template <typename T = void> T Finishb__1(uintptr_t response) {
		return ((T (*)(cDisplayClass220*, uintptr_t))(Il2CppBase() + 0x2839D74))(this, response);
	}

};

}
