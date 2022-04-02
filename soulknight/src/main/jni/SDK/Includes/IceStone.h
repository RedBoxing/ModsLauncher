#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceStone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceStone"));
	}

	template <typename T = int32_t> T& initPoolCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& stoneFinalExplode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& finalBullet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& finalBulletCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& stonePrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& stoneCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& extraCountFactor() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& showDurationRange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& explodeDurationRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& animShowTrigger() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& animExplodeTrigger() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> T& animFadeTrigger() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& explodeAnimTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& iceStoneMinDistance() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& iceEndPrefab() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& iceEatMinDistance() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& randomProvider() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _sourceObject() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _instantiateTimeCounter() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _explodeTimeCounter() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = void*> T& _instantiateStoneQueue() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& _explodeStoneQueue() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _positionRollList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _explodeRollList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _stoneModels() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> T& _stoneTriggerBuffer() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _explodeStoneModels() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = bool> T get_HasStone() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DD8C18))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DDF328))(this);
	}
	template <typename T = void> T AddStone() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DDF3AC))(this);
	}
	template <typename T = uintptr_t> T GetStone() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DDF578))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DDC3C4))(this);
	}
	template <typename T = void> T StartRelease(int32_t nodeCount, Il2CppList<uintptr_t>* availablePositions, uintptr_t roomTransform, uintptr_t damageGeneralModel) {
		return ((T (*)(IceStone*, int32_t, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DD9788))(this, nodeCount, availablePositions, roomTransform, damageGeneralModel);
	}
	template <typename T = void> T InstantiateUpdate() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DDF648))(this);
	}
	template <typename T = void> T TriggerExplode(uintptr_t damageGeneralModel) {
		return ((T (*)(IceStone*, uintptr_t))(Il2CppBase() + 0x1DDD8E8))(this, damageGeneralModel);
	}
	template <typename T = bool> T CanEatIceStone(Il2CppVector3 position, uintptr_t* eatIndex) {
		return ((T (*)(IceStone*, Il2CppVector3, uintptr_t*))(Il2CppBase() + 0x1DDC5C4))(this, position, eatIndex);
	}
	template <typename T = void> T EatIceStone(int32_t eatIndex, uintptr_t damageGeneralModel) {
		return ((T (*)(IceStone*, int32_t, uintptr_t))(Il2CppBase() + 0x1DDC814))(this, eatIndex, damageGeneralModel);
	}
	template <typename T = void> T ExplodingUpdate() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DDF800))(this);
	}
	template <typename T = void> T ExplodingReleaseUpdate() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DDF9BC))(this);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(IceStone*))(Il2CppBase() + 0x1DDA964))(this);
	}

};

}
