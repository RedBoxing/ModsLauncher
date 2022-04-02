#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGNetWorkManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGNetWorkManager"));
	}

	template <typename T = uintptr_t> static T& inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGNetWorkManager*))(Il2CppBase() + 0x1B78670))(this);
	}
	template <typename T = void> T OnServerAddPlayer(uintptr_t conn) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B786CC))(this, conn);
	}
	template <typename T = void> T OnStartHost() {
		return ((T (*)(RGNetWorkManager*))(Il2CppBase() + 0x1B78A50))(this);
	}
	template <typename T = void> T OnServerReady(uintptr_t conn) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B78CB4))(this, conn);
	}
	template <typename T = void> T OnClientSceneChanged(uintptr_t conn) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B78D30))(this, conn);
	}
	template <typename T = void> T OnServerSceneChanged(Il2CppString* scene_name) {
		return ((T (*)(RGNetWorkManager*, Il2CppString*))(Il2CppBase() + 0x1B78E04))(this, scene_name);
	}
	template <typename T = void> T OnServerDisconnect(uintptr_t conn) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B78E80))(this, conn);
	}
	template <typename T = void> T OnClientDisconnect(uintptr_t conn) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B79110))(this, conn);
	}
	template <typename T = void> T OnServerConnect(uintptr_t conn) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B792F4))(this, conn);
	}
	template <typename T = void> T OnClientConnect(uintptr_t conn) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B795C0))(this, conn);
	}
	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B798D0))(0);
	}
	template <typename T = void> T ConnectTo(Il2CppString* hostIp) {
		return ((T (*)(RGNetWorkManager*, Il2CppString*))(Il2CppBase() + 0x1B79A08))(this, hostIp);
	}
	template <typename T = void> T StopConnect() {
		return ((T (*)(RGNetWorkManager*))(Il2CppBase() + 0x1B79B68))(this);
	}
	template <typename T = void> T SetOnlineScene(Il2CppString* sceneName) {
		return ((T (*)(RGNetWorkManager*, Il2CppString*))(Il2CppBase() + 0x1B79C64))(this, sceneName);
	}
	template <typename T = void> T SelectTransport(bool lanGame) {
		return ((T (*)(RGNetWorkManager*, bool))(Il2CppBase() + 0x1B79D80))(this, lanGame);
	}
	template <typename T = bool> T IsRoomFull() {
		return ((T (*)(RGNetWorkManager*))(Il2CppBase() + 0x1B789C0))(this);
	}
	template <typename T = bool> T IsRoomJoinable() {
		return ((T (*)(RGNetWorkManager*))(Il2CppBase() + 0x1B79E50))(this);
	}
	template <typename T = bool> T IsServer() {
		return ((T (*)(RGNetWorkManager*))(Il2CppBase() + 0x1B7982C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnServerAddPlayer(uintptr_t P0) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B79F24))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnStartHost() {
		return ((T (*)(RGNetWorkManager*))(Il2CppBase() + 0x1B79F2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnServerReady(uintptr_t P0) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B79F34))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnClientSceneChanged(uintptr_t P0) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B79F3C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnServerSceneChanged(Il2CppString* P0) {
		return ((T (*)(RGNetWorkManager*, Il2CppString*))(Il2CppBase() + 0x1B79F44))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnServerDisconnect(uintptr_t P0) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B79F4C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnClientDisconnect(uintptr_t P0) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B79F54))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnServerConnect(uintptr_t P0) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B79F5C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnClientConnect(uintptr_t P0) {
		return ((T (*)(RGNetWorkManager*, uintptr_t))(Il2CppBase() + 0x1B79F64))(this, P0);
	}

};

}
