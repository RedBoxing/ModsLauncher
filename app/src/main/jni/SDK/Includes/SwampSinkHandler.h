#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwampSinkHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwampSinkHandler"));
	}

	template <typename T = Il2CppString*> T& swampFloorColliderPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& targetTags() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& sinkParentPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& speedDownPrefab() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& speedDownPoolCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& sinkSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& maxSinkAmount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& speedInfluenceMax() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _colliderModels() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _speedDownObjectPool() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _speedDownParentTransform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _deadColliderKey() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = Il2CppString*> T get_PropertyModifyKey() {
		return ((T (*)(SwampSinkHandler*))(Il2CppBase() + 0x18B9A34))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SwampSinkHandler*))(Il2CppBase() + 0x18B9B04))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(SwampSinkHandler*))(Il2CppBase() + 0x18B9D24))(this);
	}
	template <typename T = uintptr_t> T GetSpeedDownObject() {
		return ((T (*)(SwampSinkHandler*))(Il2CppBase() + 0x18B9E08))(this);
	}
	template <typename T = void> T OnInstantiateSwampFloor(uintptr_t swampFloorObject) {
		return ((T (*)(SwampSinkHandler*, uintptr_t))(Il2CppBase() + 0x18B9F60))(this, swampFloorObject);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(SwampSinkHandler*))(Il2CppBase() + 0x18BA2D4))(this);
	}
	template <typename T = void> T ColliderEnter(uintptr_t collider) {
		return ((T (*)(SwampSinkHandler*, uintptr_t))(Il2CppBase() + 0x18BAB98))(this, collider);
	}
	template <typename T = void> T NewColliderEnter(uintptr_t collider) {
		return ((T (*)(SwampSinkHandler*, uintptr_t))(Il2CppBase() + 0x18BAD98))(this, collider);
	}
	template <typename T = void> T OldColliderEnter(uintptr_t collider) {
		return ((T (*)(SwampSinkHandler*, uintptr_t))(Il2CppBase() + 0x18BB614))(this, collider);
	}
	template <typename T = void> T ColliderExit(uintptr_t collider) {
		return ((T (*)(SwampSinkHandler*, uintptr_t))(Il2CppBase() + 0x18BC00C))(this, collider);
	}
	template <typename T = void> T OnMultiGameRoomStart(uintptr_t e) {
		return ((T (*)(SwampSinkHandler*, uintptr_t))(Il2CppBase() + 0x18BC8A0))(this, e);
	}

};

}
