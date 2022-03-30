#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SnakeModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SnakeModel"));
	}

	template <typename T = uintptr_t> T& bodyPrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& tailPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& head() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& minDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& outMinDistance() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& lerpMax() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& nodeLength() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& initBodyCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& burrowMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& dirtPrefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& dirtActiveSortingLayer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& dirtActiveSortingOrder() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& dirtInActiveSortingLayer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& dirtInActiveSortingOrder() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppVector3> T& dirtPositionOffset() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppVector3> T& outDirtPositionOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& dirtEndSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& hideOffset() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& addNodeFxPrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& bodyBulletInfo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& bodyBulletReleaseDuration() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& angryBodyBulletReleaseDuration() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& bodyBulletReleaseCount() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& bodyBulletAnimTriggerName() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& maxBodyCount() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& intensiveScale() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& onToUndergroundEnd() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& onToTheGroundEnd() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _nodes() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _headNode() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _tailNode() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& _prevHeadPosition() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& _currentHideCount() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& _initHeadPosition() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector3> T& _currentHeadPosition() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& _dirtModel() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& _isOutGround() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& _outCount() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppVector3> T& _outGroundPosition() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& _canReleaseBodyBullet() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& _bodyBulletCounter() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& _bossAI24() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = bool> T get_CanAddBodyNode() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DDC7A4))(this);
	}
	template <typename T = void> T add_onToUndergroundEnd(uintptr_t value) {
		return ((T (*)(SnakeModel*, uintptr_t))(Il2CppBase() + 0x1DD8814))(this, value);
	}
	template <typename T = void> T remove_onToUndergroundEnd(uintptr_t value) {
		return ((T (*)(SnakeModel*, uintptr_t))(Il2CppBase() + 0x1DE01D8))(this, value);
	}
	template <typename T = void> T add_onToTheGroundEnd(uintptr_t value) {
		return ((T (*)(SnakeModel*, uintptr_t))(Il2CppBase() + 0x1DD8900))(this, value);
	}
	template <typename T = void> T remove_onToTheGroundEnd(uintptr_t value) {
		return ((T (*)(SnakeModel*, uintptr_t))(Il2CppBase() + 0x1DE02C4))(this, value);
	}
	template <typename T = bool> T get_CanReleaseBodyBullet() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DE03B0))(this);
	}
	template <typename T = int32_t> T get_NodeCount() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DD96E0))(this);
	}
	template <typename T = void> T Init(uintptr_t bossAI24) {
		return ((T (*)(SnakeModel*, uintptr_t))(Il2CppBase() + 0x1DD7FC0))(this, bossAI24);
	}
	template <typename T = void> T StartAI() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DD92BC))(this);
	}
	template <typename T = void> T OnTheGroundUpdate() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DDADF0))(this);
	}
	template <typename T = void> T ToUndergroundStart() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DDDDE8))(this);
	}
	template <typename T = void> T ToUndergroundUpdate() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DDB268))(this);
	}
	template <typename T = void> T UpdateNodePosition(uintptr_t currentNode, uintptr_t prevNode, float positionDelta) {
		return ((T (*)(SnakeModel*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x1DE044C))(this, currentNode, prevNode, positionDelta);
	}
	template <typename T = void> T UpdateNodePosition_1(uintptr_t currentNode, Il2CppVector3 prevPosition, Il2CppVector3 moveDirection, float positionDelta) {
		return ((T (*)(SnakeModel*, uintptr_t, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x1DE0A90))(this, currentNode, prevPosition, moveDirection, positionDelta);
	}
	template <typename T = void> T AddBodyNode() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DDCAAC))(this);
	}
	template <typename T = void> T RemoveNode() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DE0E2C))(this);
	}
	template <typename T = void> T OutGround() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DD9344))(this);
	}
	template <typename T = void> T OutGroundUpdate() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DE0844))(this);
	}
	template <typename T = void> T ReleaseBodyBullet(uintptr_t damageGeneralModel) {
		return ((T (*)(SnakeModel*, uintptr_t))(Il2CppBase() + 0x1DE10B8))(this, damageGeneralModel);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(SnakeModel*))(Il2CppBase() + 0x1DDA740))(this);
	}

};

}
