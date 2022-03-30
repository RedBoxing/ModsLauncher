#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetControllerManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetControllerManager"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& serverController() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& localController() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& id2Controllers() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& otherControllers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& controllers() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& localControllerIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& isServer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _netContinue() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = Il2CppList<int32_t>*> T& readyClient() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<int32_t, float>*> T& count2Hp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<int32_t, float>*> T& count2Speed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, float>*> T& count2buffFactor() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4388BF8))(0);
	}
	template <typename T = uintptr_t> T get_serverController() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4373CCC))(this);
	}
	template <typename T = void> T set_serverController(uintptr_t value) {
		return ((T (*)(NetControllerManager*, uintptr_t))(Il2CppBase() + 0x4388C84))(this, value);
	}
	template <typename T = uintptr_t> T get_localController() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4373CD4))(this);
	}
	template <typename T = void> T set_localController(uintptr_t value) {
		return ((T (*)(NetControllerManager*, uintptr_t))(Il2CppBase() + 0x4388C8C))(this, value);
	}
	template <typename T = uintptr_t> T GetNetController(uintptr_t controller) {
		return ((T (*)(NetControllerManager*, uintptr_t))(Il2CppBase() + 0x4388C94))(this, controller);
	}
	template <typename T = int32_t> T get_playerCount() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x437605C))(this);
	}
	template <typename T = bool> T get_IsSinglePlayer() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4388E14))(this);
	}
	template <typename T = int32_t> T get_localNetId() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4388E80))(this);
	}
	template <typename T = bool> T get_isClient() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4377DD8))(this);
	}
	template <typename T = bool> T get_netContinue() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4388F5C))(this);
	}
	template <typename T = void> T set_netContinue(bool value) {
		return ((T (*)(NetControllerManager*, bool))(Il2CppBase() + 0x4388FBC))(this, value);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4389034))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetOtherControllers() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4389100))(this);
	}
	template <typename T = uintptr_t> T GetNextController(uintptr_t controller) {
		return ((T (*)(NetControllerManager*, uintptr_t))(Il2CppBase() + 0x4389348))(this, controller);
	}
	template <typename T = bool> T HasHero(int32_t heroIndex) {
		return ((T (*)(NetControllerManager*, int32_t))(Il2CppBase() + 0x4389504))(this, heroIndex);
	}
	template <typename T = float> T GetBossHpFactor() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x43896B8))(this);
	}
	template <typename T = float> T GetHpFactor() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4389774))(this);
	}
	template <typename T = float> T GetShootSpeedFactor() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4389824))(this);
	}
	template <typename T = float> T GetBuffImmune() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x43898D4))(this);
	}
	template <typename T = void> T StartGame() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4389984))(this);
	}
	template <typename T = void> T SetupServerController() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x43899EC))(this);
	}
	template <typename T = void> T GenControllerList() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4374984))(this);
	}
	template <typename T = int32_t> T GetControllerIndex(uintptr_t controller) {
		return ((T (*)(NetControllerManager*, uintptr_t))(Il2CppBase() + 0x4374194))(this, controller);
	}
	template <typename T = uintptr_t> T GetNetCtrlByNetId(uint32_t _netId) {
		return ((T (*)(NetControllerManager*, uint32_t))(Il2CppBase() + 0x43740A4))(this, _netId);
	}
	template <typename T = bool> T IsNetCtrlSetUp(uint32_t netId) {
		return ((T (*)(NetControllerManager*, uint32_t))(Il2CppBase() + 0x4389BA4))(this, netId);
	}
	template <typename T = void> T ResetNetControllers() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4389D54))(this);
	}
	template <typename T = bool> T IsAllPlayerReady() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x4375A3C))(this);
	}
	template <typename T = void> T AddPlayer(uintptr_t netPlayerController) {
		return ((T (*)(NetControllerManager*, uintptr_t))(Il2CppBase() + 0x438A0A0))(this, netPlayerController);
	}
	template <typename T = void> T RemovePlayer(uint32_t netId) {
		return ((T (*)(NetControllerManager*, uint32_t))(Il2CppBase() + 0x438A3B0))(this, netId);
	}
	template <typename T = void> T ResetBattleReady() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x438A580))(this);
	}
	template <typename T = bool> T AllPlayerDead() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x438A740))(this);
	}
	template <typename T = void> T RefreshPlayerBattleData() {
		return ((T (*)(NetControllerManager*))(Il2CppBase() + 0x438A944))(this);
	}

};

}
