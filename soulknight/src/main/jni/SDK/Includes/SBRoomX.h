#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBRoomX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBRoomX"));
	}

	template <typename T = uintptr_t> T& _mapManager() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& _roomInfo() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = bool> T& roomObjectCreated() {
		return *(T*)((uintptr_t)this + 0x128);
	}

	template <typename T = uintptr_t> T get_mapManagerLevel() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180B40C))(this);
	}
	template <typename T = uintptr_t> T get_roomInfo() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x1808990))(this);
	}
	template <typename T = void> T set_roomInfo(uintptr_t value) {
		return ((T (*)(SBRoomX*, uintptr_t))(Il2CppBase() + 0x180B65C))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180B918))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(SBRoomX*, int32_t))(Il2CppBase() + 0x180BBE4))(this, seed);
	}
	template <typename T = void> T OnRoomInfoChanged(bool resetRoom) {
		return ((T (*)(SBRoomX*, bool))(Il2CppBase() + 0x180B6F8))(this, resetRoom);
	}
	template <typename T = void> T SetupSBRoom() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180BD14))(this);
	}
	template <typename T = void> T ResetMapManager() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180B4CC))(this);
	}
	template <typename T = void> T ResetRoom() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180BF6C))(this);
	}
	template <typename T = void> T HandleCollider() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180C8B8))(this);
	}
	template <typename T = void> T StartRoom() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180CB18))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetChestArr() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180CBD0))(this);
	}
	template <typename T = void> T RegenerateBPoint() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180C438))(this);
	}
	template <typename T = void> T ClearWall() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180C314))(this);
	}
	template <typename T = void> T ClearFloor() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180C1F0))(this);
	}
	template <typename T = void> T CreateRoomObject() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180C814))(this);
	}
	template <typename T = void> T ShowSettingWindow() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180CC7C))(this);
	}
	template <typename T = void> T SetDatas(Il2CppArray<uintptr_t>* datas) {
		return ((T (*)(SBRoomX*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x180CCE0))(this, datas);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDatas() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180CD50))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(SBRoomX*, uintptr_t))(Il2CppBase() + 0x180CDB0))(this, other);
	}
	template <typename T = void> T ItemTrigger(uintptr_t controller) {
		return ((T (*)(SBRoomX*, uintptr_t))(Il2CppBase() + 0x180D0F0))(this, controller);
	}
	template <typename T = void> T SyncItemTrigger(uintptr_t controller, Il2CppString* ext_info) {
		return ((T (*)(SBRoomX*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x180D1A4))(this, controller, ext_info);
	}
	template <typename T = bool> T CanUse() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D250))(this);
	}
	template <typename T = int32_t> T GetItemValue() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D2B0))(this);
	}
	template <typename T = int32_t> T GetItemLevel() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D310))(this);
	}
	template <typename T = Il2CppString*> T GetItemName() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D370))(this);
	}
	template <typename T = bool> T get_isBattleRoom() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D49C))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_mapManagerLevel() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D5E4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D5EC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(SBRoomX*, int32_t))(Il2CppBase() + 0x180D5F4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StartRoom() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D5FC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_GetChestArr() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D604))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_isBattleRoom() {
		return ((T (*)(SBRoomX*))(Il2CppBase() + 0x180D60C))(this);
	}

};

}
