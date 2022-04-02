#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass270
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass27_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& gameInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T ShowQuquestDialogb__0(uintptr_t i) {
		return ((T (*)(cDisplayClass270*, uintptr_t))(Il2CppBase() + 0x1E6F900))(this, i);
	}

};

}
