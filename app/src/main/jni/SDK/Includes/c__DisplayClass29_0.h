#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass290
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass29_0"));
	}

	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T OnClickDownloadb__0(uintptr_t i) {
		return ((T (*)(cDisplayClass290*, uintptr_t))(Il2CppBase() + 0x1E6FE74))(this, i);
	}

};

}
