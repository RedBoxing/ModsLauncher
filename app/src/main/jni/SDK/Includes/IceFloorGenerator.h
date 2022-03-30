#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceFloorGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceFloorGenerator"));
	}

	template <typename T = uintptr_t> T& size() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& tileMap() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& stencilClean() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& tiles() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& coverRange() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& startPoint() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& branchProbability() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& onUpdatePositionEvent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& hasFusionTile() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& fusionTileMap() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rightFusionTiles() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& upFusionTiles() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& leftFusionTiles() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bottomFusionTiles() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& rightFusionIceTiles() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& upFusionIceTiles() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& leftFusionIceTiles() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& bottomFusionIceTiles() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> static T& GridSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& rgRandom() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& _overallCount() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _resultPositions() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _resultMap() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = void*> T& onGenerateTile() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = bool> T IsCovered(int32_t x, int32_t y) {
		return ((T (*)(IceFloorGenerator*, int32_t, int32_t))(Il2CppBase() + 0x19BAE38))(this, x, y);
	}
	template <typename T = void> T add_onGenerateTile(void* value) {
		return ((T (*)(IceFloorGenerator*, void*))(Il2CppBase() + 0x19BD1C8))(this, value);
	}
	template <typename T = void> T remove_onGenerateTile(void* value) {
		return ((T (*)(IceFloorGenerator*, void*))(Il2CppBase() + 0x19BD2B4))(this, value);
	}
	template <typename T = float> T RandomRange(float from, float to) {
		return ((T (*)(IceFloorGenerator*, float, float))(Il2CppBase() + 0x19BD3A0))(this, from, to);
	}
	template <typename T = int32_t> T RandomRange_1(int32_t from, int32_t to) {
		return ((T (*)(IceFloorGenerator*, int32_t, int32_t))(Il2CppBase() + 0x19BD43C))(this, from, to);
	}
	template <typename T = void> T GenerateTile() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BD4DC))(this);
	}
	template <typename T = void> T GenerateTile_1(uintptr_t floorState, uintptr_t random) {
		return ((T (*)(IceFloorGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19BACE0))(this, floorState, random);
	}
	template <typename T = void> T GenerateTile_2(uintptr_t size, uintptr_t random) {
		return ((T (*)(IceFloorGenerator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x19BB1E4))(this, size, random);
	}
	template <typename T = void> T ClearTile() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BB370))(this);
	}
	template <typename T = void> T UpdateShadowCollider() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BD898))(this);
	}
	template <typename T = void> T SetTileMap() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BD824))(this);
	}
	template <typename T = void> T SetGeneralTileMap() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BDB14))(this);
	}
	template <typename T = void> T SetFusionTileMap() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BDE70))(this);
	}
	template <typename T = void> T SetResultPositions() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BD590))(this);
	}
	template <typename T = void> T SetResultPositions_1(uintptr_t positions) {
		return ((T (*)(IceFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19BDA50))(this, positions);
	}
	template <typename T = void> T SetStartPointAndSize(uintptr_t positions) {
		return ((T (*)(IceFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19BF448))(this, positions);
	}
	template <typename T = void> T RollResultPosition(uintptr_t positions) {
		return ((T (*)(IceFloorGenerator*, uintptr_t))(Il2CppBase() + 0x19BE7F0))(this, positions);
	}
	template <typename T = void> T UpdateCompareList(uintptr_t currentPosition, Il2CppList<uintptr_t>* positionCompareList) {
		return ((T (*)(IceFloorGenerator*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x19BF720))(this, currentPosition, positionCompareList);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BF9C0))(this);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(IceFloorGenerator*))(Il2CppBase() + 0x19BFAF4))(this);
	}

};

}
