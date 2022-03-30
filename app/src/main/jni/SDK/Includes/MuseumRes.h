#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MuseumRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MuseumRes"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& boards() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& edges_normal() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& edges_badass() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& season2prizes() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> T GetEdge(uintptr_t board, uintptr_t level) {
		return ((T (*)(MuseumRes*, uintptr_t, uintptr_t))(Il2CppBase() + 0x437B758))(this, board, level);
	}
	template <typename T = uintptr_t> T GetSeasonPrizeSprite(uintptr_t season, uintptr_t prize) {
		return ((T (*)(MuseumRes*, uintptr_t, uintptr_t))(Il2CppBase() + 0x437B900))(this, season, prize);
	}

};

}
