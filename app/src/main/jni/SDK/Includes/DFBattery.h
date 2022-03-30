#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DFBattery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DFBattery"));
	}

	template <typename T = Il2CppString*> T& batteryName() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = bool> T& alwaysAttack() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = int32_t> T& standardHp() {
		return *(T*)((uintptr_t)this + 0x264);
	}
	template <typename T = float> T& standardScoutSpeed() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = float> T& standardAtkSpeed() {
		return *(T*)((uintptr_t)this + 0x26C);
	}
	template <typename T = int32_t> T& _effectedLevel() {
		return *(T*)((uintptr_t)this + 0x270);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4284EFC))(this);
	}
	template <typename T = void> T CreateHpBar() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x42850B8))(this);
	}
	template <typename T = void> T UpdateHpBar(float value, float maxValue) {
		return ((T (*)(DFBattery*, float, float))(Il2CppBase() + 0x42854F0))(this, value, maxValue);
	}
	template <typename T = void> T SetSourceObject(uintptr_t source) {
		return ((T (*)(DFBattery*, uintptr_t))(Il2CppBase() + 0x42855F8))(this, source);
	}
	template <typename T = bool> T CanPlace(Il2CppVector2 position) {
		return ((T (*)(DFBattery*, Il2CppVector2))(Il2CppBase() + 0x4285680))(this, position);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x42856FC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4285BBC))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4285DD0))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage) {
		return ((T (*)(DFBattery*, int32_t))(Il2CppBase() + 0x4285E68))(this, damage);
	}
	template <typename T = void> T Dead() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286088))(this);
	}
	template <typename T = void> T AddDelegate() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x42865CC))(this);
	}
	template <typename T = void> T RemoveDelegate() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x42866C4))(this);
	}
	template <typename T = void> T OnGameStateChange(int32_t game_state) {
		return ((T (*)(DFBattery*, int32_t))(Il2CppBase() + 0x42867BC))(this, game_state);
	}
	template <typename T = void> T OnAdditionLevelChanged() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x42852E8))(this);
	}
	template <typename T = uintptr_t> static T CreateBattery(uintptr_t info) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4286854))(0, info);
	}
	template <typename T = void> T SetInfo(uintptr_t info) {
		return ((T (*)(DFBattery*, uintptr_t))(Il2CppBase() + 0x4286AE4))(this, info);
	}
	template <typename T = uintptr_t> T SetInfoDelay(uintptr_t info) {
		return ((T (*)(DFBattery*, uintptr_t))(Il2CppBase() + 0x4286B78))(this, info);
	}
	template <typename T = uintptr_t> T GetInfo() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286C84))(this);
	}
	template <typename T = void> T RestoreHp() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286E04))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286EC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetSourceObject(uintptr_t P0) {
		return ((T (*)(DFBattery*, uintptr_t))(Il2CppBase() + 0x4286ECC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286ED4))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286EDC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286EE4))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0) {
		return ((T (*)(DFBattery*, int32_t))(Il2CppBase() + 0x4286EEC))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Dead() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286EF4))(this);
	}
	template <typename T = void> T iFixBaseProxy_AddDelegate() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286EFC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RemoveDelegate() {
		return ((T (*)(DFBattery*))(Il2CppBase() + 0x4286F04))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnGameStateChange(int32_t P0) {
		return ((T (*)(DFBattery*, int32_t))(Il2CppBase() + 0x4286F0C))(this, P0);
	}

};

}
