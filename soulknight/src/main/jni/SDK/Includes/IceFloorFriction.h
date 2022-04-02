#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceFloorFriction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceFloorFriction"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& targetTags() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& forcePerSecond() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& maxForce() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& extraFriction() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& frictionCollider() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _controllerCallbacks() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _effectCollider() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _removeBaseController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& AnimIdRun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& _instanceId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _raycastHit2DBuffer() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(IceFloorFriction*))(Il2CppBase() + 0x19BB710))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(IceFloorFriction*, uintptr_t))(Il2CppBase() + 0x19BB774))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(IceFloorFriction*, uintptr_t))(Il2CppBase() + 0x19BBC3C))(this, other);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(IceFloorFriction*))(Il2CppBase() + 0x19BC5F0))(this);
	}
	template <typename T = void> T TargetEnter(uintptr_t other) {
		return ((T (*)(IceFloorFriction*, uintptr_t))(Il2CppBase() + 0x19BB8F4))(this, other);
	}
	template <typename T = void> T AddListener(uintptr_t baseController) {
		return ((T (*)(IceFloorFriction*, uintptr_t))(Il2CppBase() + 0x19BCCC4))(this, baseController);
	}
	template <typename T = void> T SetForceLerp(uintptr_t controller) {
		return ((T (*)(IceFloorFriction*, uintptr_t))(Il2CppBase() + 0x19BCEA8))(this, controller);
	}
	template <typename T = void> T RemoveListener(uintptr_t baseController) {
		return ((T (*)(IceFloorFriction*, uintptr_t))(Il2CppBase() + 0x19BC460))(this, baseController);
	}
	template <typename T = float> static T GetControllerAngle(uintptr_t controller) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19BCB50))(0, controller);
	}
	template <typename T = bool> static T IsControllerRun(uintptr_t controller) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x19BC0E8))(0, controller);
	}

};

}
