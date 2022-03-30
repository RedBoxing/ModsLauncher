#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChestClosableSeller
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestClosableSeller"));
	}

	template <typename T = uintptr_t> T& chestRoot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& resetAtStart() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& showEdgeTips() {
		return *(T*)((uintptr_t)this + 0xC1);
	}
	template <typename T = uintptr_t> T& buffRanData() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& chests() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& itemsName() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& edgeTips() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ChestClosableSeller*))(Il2CppBase() + 0x1878684))(this);
	}
	template <typename T = void> T MakeEdgeTipsIfNeeded() {
		return ((T (*)(ChestClosableSeller*))(Il2CppBase() + 0x1878878))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(ChestClosableSeller*, int32_t))(Il2CppBase() + 0x1878954))(this, seed);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x1878EA4))(this, other);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x1879040))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x1879228))(this, controller);
	}
	template <typename T = void> T OnItemTriggerState(uintptr_t controller, int32_t state) {
		return ((T (*)(ChestClosableSeller*, uintptr_t, int32_t))(Il2CppBase() + 0x1879474))(this, controller, state);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x1879708))(this, controller);
	}
	template <typename T = void> T RefreshChestsItem() {
		return ((T (*)(ChestClosableSeller*))(Il2CppBase() + 0x1878B80))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetChestItems() {
		return ((T (*)(ChestClosableSeller*))(Il2CppBase() + 0x187985C))(this);
	}
	template <typename T = void> T CloseAllChests() {
		return ((T (*)(ChestClosableSeller*))(Il2CppBase() + 0x1879A4C))(this);
	}
	template <typename T = void> T CloseOthers(uintptr_t chest) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x1879BFC))(this, chest);
	}
	template <typename T = void> T OnCloseComplete() {
		return ((T (*)(ChestClosableSeller*))(Il2CppBase() + 0x1879DEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(ChestClosableSeller*, int32_t))(Il2CppBase() + 0x1879FF8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x187A000))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x187A008))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x187A010))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerState(uintptr_t P0, int32_t P1) {
		return ((T (*)(ChestClosableSeller*, uintptr_t, int32_t))(Il2CppBase() + 0x187A018))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(ChestClosableSeller*, uintptr_t))(Il2CppBase() + 0x187A020))(this, P0);
	}

};

}
