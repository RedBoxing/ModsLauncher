#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGEnergyBallTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGEnergyBallTrigger"));
	}

	template <typename T = uintptr_t> T& buff() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = void*> T& _colliderCache() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = void*> T& _spriteRendererCache() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = bool> T get_IsPlayerBullet() {
		return ((T (*)(RGEnergyBallTrigger*))(Il2CppBase() + 0x1C40A28))(this);
	}
	template <typename T = bool> T get_IsEnemyBullet() {
		return ((T (*)(RGEnergyBallTrigger*))(Il2CppBase() + 0x1C40A90))(this);
	}
	template <typename T = bool> T IsHitEnemy(uintptr_t other) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t))(Il2CppBase() + 0x1C40AF8))(this, other);
	}
	template <typename T = bool> T IsHitPlayer(uintptr_t other) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t))(Il2CppBase() + 0x1C40C58))(this, other);
	}
	template <typename T = bool> T IsHitPet(uintptr_t other) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t))(Il2CppBase() + 0x1C40DB8))(this, other);
	}
	template <typename T = void> T HitEnemy(uintptr_t other, uintptr_t* hasCritical) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1C40F18))(this, other, hasCritical);
	}
	template <typename T = void> T HitPlayer(uintptr_t other) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t))(Il2CppBase() + 0x1C415CC))(this, other);
	}
	template <typename T = void> T HitPet(uintptr_t other) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t))(Il2CppBase() + 0x1C41A9C))(this, other);
	}
	template <typename T = void> T HasHitSomeThing(uintptr_t other, bool hasCritical) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t, bool))(Il2CppBase() + 0x1C41C78))(this, other, hasCritical);
	}
	template <typename T = bool> T IsHitBox(uintptr_t other) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t))(Il2CppBase() + 0x1C42348))(this, other);
	}
	template <typename T = void> T HitBox(uintptr_t other, uintptr_t* hasHit) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x1C42414))(this, other, hasHit);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t))(Il2CppBase() + 0x1C425E8))(this, other);
	}
	template <typename T = void> T EndHide() {
		return ((T (*)(RGEnergyBallTrigger*))(Il2CppBase() + 0x1C42740))(this);
	}
	template <typename T = void> T StartHide() {
		return ((T (*)(RGEnergyBallTrigger*))(Il2CppBase() + 0x1C42244))(this);
	}
	template <typename T = void> T SetInfo(int32_t damage, int32_t camp, bool can_through, int32_t repel, int32_t critical) {
		return ((T (*)(RGEnergyBallTrigger*, int32_t, int32_t, bool, int32_t, int32_t))(Il2CppBase() + 0x1C42844))(this, damage, camp, can_through, repel, critical);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RGEnergyBallTrigger*, uintptr_t))(Il2CppBase() + 0x1C429D0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_SetInfo(int32_t P0, int32_t P1, bool P2, int32_t P3, int32_t P4) {
		return ((T (*)(RGEnergyBallTrigger*, int32_t, int32_t, bool, int32_t, int32_t))(Il2CppBase() + 0x1C429D8))(this, P0, P1, P2, P3, P4);
	}

};

}
