#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicEntranceRune
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicEntranceRune"));
	}

	template <typename T = int32_t> T& runeIndex() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& triggerCollider() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& onEnter() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& onExit() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& onTrigger() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& activeAnimKey() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& inActiveAnimKey() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicEntranceRune*))(Il2CppBase() + 0x42BE4B4))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(RelicEntranceRune*))(Il2CppBase() + 0x42BE53C))(this);
	}
	template <typename T = void> T InActive(bool hasAnim) {
		return ((T (*)(RelicEntranceRune*, bool))(Il2CppBase() + 0x42B9568))(this, hasAnim);
	}
	template <typename T = void> T Active(float animDelay) {
		return ((T (*)(RelicEntranceRune*, float))(Il2CppBase() + 0x42BBA54))(this, animDelay);
	}
	template <typename T = uintptr_t> T ActiveAnim(float animDelay) {
		return ((T (*)(RelicEntranceRune*, float))(Il2CppBase() + 0x42BE5C8))(this, animDelay);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RelicEntranceRune*, uintptr_t))(Il2CppBase() + 0x42BE6D4))(this, other);
	}
	template <typename T = void> T OnTriggerExit2D(uintptr_t other) {
		return ((T (*)(RelicEntranceRune*, uintptr_t))(Il2CppBase() + 0x42BE814))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(RelicEntranceRune*, uintptr_t))(Il2CppBase() + 0x42BE954))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(RelicEntranceRune*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42BEB40))(this, controller, ext_info);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_GetItemName() {
		return ((T (*)(RelicEntranceRune*))(Il2CppBase() + 0x42BEC8C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RelicEntranceRune*, uintptr_t))(Il2CppBase() + 0x42BEC94))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerExit2D(uintptr_t P0) {
		return ((T (*)(RelicEntranceRune*, uintptr_t))(Il2CppBase() + 0x42BEC9C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_ItemTrigger(uintptr_t P0) {
		return ((T (*)(RelicEntranceRune*, uintptr_t))(Il2CppBase() + 0x42BECA4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SyncItemTrigger(uintptr_t P0, Il2CppString* P1) {
		return ((T (*)(RelicEntranceRune*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x42BECAC))(this, P0, P1);
	}

};

}
