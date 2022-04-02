#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass350
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass35_0"));
	}

	template <typename T = Il2CppString*> T& bgmName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& needPlay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& onLoad() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T LoadBgmb__0() {
		return ((T (*)(cDisplayClass350*))(Il2CppBase() + 0x41C38AC))(this);
	}

};

}
