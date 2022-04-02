#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DFEnemyDistribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DFEnemyDistribute"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& forestEnemys() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& iceEnemys() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ruinsEnemys() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& castleEnemys() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& graveEnemys() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& halloweenEnemys() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& alienEnemys() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& volcanoEnemys() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& _scene2Enemies() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T get_scene2Enemies() {
		return ((T (*)(DFEnemyDistribute*))(Il2CppBase() + 0x42880F8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetEnemiesList(uintptr_t rg_random) {
		return ((T (*)(DFEnemyDistribute*, uintptr_t))(Il2CppBase() + 0x42882E0))(this, rg_random);
	}

};

}
