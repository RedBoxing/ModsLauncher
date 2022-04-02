#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Character.Player {

class UfoUpgradedController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Character.Player", "UfoUpgradedController"));
	}

	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _hitCache() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& _enemyLayer() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& _layerMask() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _hitList() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& attackInterval() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = int32_t> T& maxDistance() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = int32_t> T& maxTargetCount() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& audioClip() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& thunderObject() {
		return *(T*)((uintptr_t)this + 0x160);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UfoUpgradedController*))(Il2CppBase() + 0x1C322BC))(this);
	}
	template <typename T = void> T SetUp(uintptr_t controller) {
		return ((T (*)(UfoUpgradedController*, uintptr_t))(Il2CppBase() + 0x1C324F4))(this, controller);
	}
	template <typename T = void> T Mount(uintptr_t controller) {
		return ((T (*)(UfoUpgradedController*, uintptr_t))(Il2CppBase() + 0x1C325F0))(this, controller);
	}
	template <typename T = void> T Land() {
		return ((T (*)(UfoUpgradedController*))(Il2CppBase() + 0x1C326EC))(this);
	}
	template <typename T = void> T OnTimer() {
		return ((T (*)(UfoUpgradedController*))(Il2CppBase() + 0x1C3276C))(this);
	}
	template <typename T = void> T Lightning(uintptr_t trans) {
		return ((T (*)(UfoUpgradedController*, uintptr_t))(Il2CppBase() + 0x1C32DA0))(this, trans);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(UfoUpgradedController*))(Il2CppBase() + 0x1C332F8))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetUp(uintptr_t P0) {
		return ((T (*)(UfoUpgradedController*, uintptr_t))(Il2CppBase() + 0x1C33300))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Mount(uintptr_t P0) {
		return ((T (*)(UfoUpgradedController*, uintptr_t))(Il2CppBase() + 0x1C33308))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Land() {
		return ((T (*)(UfoUpgradedController*))(Il2CppBase() + 0x1C33310))(this);
	}

};

}
