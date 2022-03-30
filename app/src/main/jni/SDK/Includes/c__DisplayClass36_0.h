#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass360
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass36_0"));
	}

	template <typename T = Il2CppString*> T& intro() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& loop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& randomList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& randomIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& needPlay() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& onLoad() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T LoadRandomBgmb__0() {
		return ((T (*)(cDisplayClass360*))(Il2CppBase() + 0x41C39C0))(this);
	}

};

}
