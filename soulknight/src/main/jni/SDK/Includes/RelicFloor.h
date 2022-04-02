#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicFloor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicFloor"));
	}

	template <typename T = uintptr_t> T& hollowTile() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& topEdgeTile() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& size() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& hollowTilemap() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& edgeTilemap() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& leftFusionTiles() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& upFusionTiles() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rightFusionTiles() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& downFusionTiles() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Generate() {
		return ((T (*)(RelicFloor*))(Il2CppBase() + 0x42C4F80))(this);
	}
	template <typename T = void> T Generate_1(Il2CppArray<uintptr_t>* floorPositions, Il2CppArray<uintptr_t>* topEdgePositions, Il2CppArray<uintptr_t>* leftFusionPositions, Il2CppArray<uintptr_t>* upFusionPositions, Il2CppArray<uintptr_t>* rightFusionPositions, Il2CppArray<uintptr_t>* downFusionPositions) {
		return ((T (*)(RelicFloor*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x42C53C0))(this, floorPositions, topEdgePositions, leftFusionPositions, upFusionPositions, rightFusionPositions, downFusionPositions);
	}

};

}
