#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass240
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass24_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& 9__1() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T AcknowledgeFinishedb__0(uintptr_t foundMatch) {
		return ((T (*)(cDisplayClass240*, uintptr_t))(Il2CppBase() + 0x2839E00))(this, foundMatch);
	}
	template <typename T = void> T AcknowledgeFinishedb__1(uintptr_t response) {
		return ((T (*)(cDisplayClass240*, uintptr_t))(Il2CppBase() + 0x2839EC4))(this, response);
	}

};

}
