#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectIceCaveEntrance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectIceCaveEntrance"));
	}

	template <typename T = float> T& triggerRange() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& touchColliderObject() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& animParamNameRun() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& animParamNameDig() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& defaultDirection() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& textKey1() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppString*> T& textKey2() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppString*> T& textKey3() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> T& digObstacleRange() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& digFromIndex() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& digCenterIndex() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& digToIndex() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& weaponParentTransform() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _digModel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = Il2CppVector3> T& _moveDirection() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& _animParamIdRun() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = int32_t> T& _animParamIdDig() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& _currentDigIndex() {
		return *(T*)((uintptr_t)this + 0x14C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D63F48))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D63FC8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D64030))(this);
	}
	template <typename T = void> T DigStoneUpdate() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D645CC))(this);
	}
	template <typename T = void> T WeaponRotationFlush() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D64C40))(this);
	}
	template <typename T = void> T ToEntranceUpdate() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D64320))(this);
	}
	template <typename T = void> T ToDoorCenterUpdate() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D640D8))(this);
	}
	template <typename T = void> T Init(uintptr_t digModel) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D64DCC))(this, digModel);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D64E5C))(this, controller);
	}
	template <typename T = void> T TalkAsk(Il2CppString* key) {
		return ((T (*)(ObjectIceCaveEntrance*, Il2CppString*))(Il2CppBase() + 0x1D651BC))(this, key);
	}
	template <typename T = void> T Talk(Il2CppString* key) {
		return ((T (*)(ObjectIceCaveEntrance*, Il2CppString*))(Il2CppBase() + 0x1D650B8))(this, key);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* extInfo) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D65348))(this, controller, extInfo);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D653D4))(this, other);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D65470))(this, controller);
	}
	template <typename T = uintptr_t> T HideInfo(uintptr_t controller) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D65674))(this, controller);
	}
	template <typename T = void> T FlushMoveDirection(Il2CppVector3 moveDirection) {
		return ((T (*)(ObjectIceCaveEntrance*, Il2CppVector3))(Il2CppBase() + 0x1D64AE4))(this, moveDirection);
	}
	template <typename T = void> T FlipXFlush() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D6573C))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D65870))(this, controller);
	}
	template <typename T = void> T SingleControllerTrigger(uintptr_t controller) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D652C4))(this, controller);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D658FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D659F4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D659FC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1D65A04))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D65A0C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D65A14))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ObjectIceCaveEntrance*, uintptr_t))(Il2CppBase() + 0x1D65A1C))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_CanUse() {
		return ((T (*)(ObjectIceCaveEntrance*))(Il2CppBase() + 0x1D65A24))(this);
	}

};

}
