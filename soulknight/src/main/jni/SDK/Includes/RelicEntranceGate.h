#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicEntranceGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicEntranceGate"));
	}

	template <typename T = Il2CppString*> T& gameStartKey() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& onTriggerSuccess() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& anim() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& openAnimKey() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& inactiveAnimKey() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& openDoorDuration() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& gatePrefab() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& gatePositionOffset() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& brokenDamageMin() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& bulletTags() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& openShakeDelay() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = float> T& openShakeDuration() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& openShakeVibrato() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = float> T& openShakeStrength() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& onOpenDoorDirectly() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& openDoorClip() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& _isAwake() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppString*> static T& OpenDirectKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RelicEntranceGate*, uintptr_t))(Il2CppBase() + 0x42B5B00))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RelicEntranceGate*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42B5D04))(this, controller, ext_info);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(RelicEntranceGate*, uintptr_t))(Il2CppBase() + 0x42B5F90))(this, controller);
	}
	template <typename T = void> T OpenDoor() {
		return ((T (*)(RelicEntranceGate*))(Il2CppBase() + 0x42B6130))(this);
	}
	template <typename T = uintptr_t> T InstantiateGate() {
		return ((T (*)(RelicEntranceGate*))(Il2CppBase() + 0x42B6268))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RelicEntranceGate*, uintptr_t))(Il2CppBase() + 0x42B6348))(this, other);
	}
	template <typename T = void> T OpenDirect() {
		return ((T (*)(RelicEntranceGate*))(Il2CppBase() + 0x42B5E00))(this);
	}
	template <typename T = void> T InActive() {
		return ((T (*)(RelicEntranceGate*))(Il2CppBase() + 0x42B6800))(this);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(RelicEntranceGate*, uintptr_t))(Il2CppBase() + 0x42B690C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(RelicEntranceGate*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42B6914))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(RelicEntranceGate*, uintptr_t))(Il2CppBase() + 0x42B691C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RelicEntranceGate*, uintptr_t))(Il2CppBase() + 0x42B6924))(this, P0);
	}

};

}
