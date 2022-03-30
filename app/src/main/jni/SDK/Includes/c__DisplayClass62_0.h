#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass620
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass62_0"));
	}

	template <typename T = void*> T& callback() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T LoadScoresb__0(uintptr_t scoreData) {
		return ((T (*)(cDisplayClass620*, uintptr_t))(Il2CppBase() + 0x461B5AC))(this, scoreData);
	}

};

}
