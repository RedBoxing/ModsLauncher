#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace VacantWall {

class VacantWallTransport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VacantWall", "VacantWallTransport"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _playerFallWait() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _playerDic() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VacantWallTransport*))(Il2CppBase() + 0x435643C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(VacantWallTransport*))(Il2CppBase() + 0x435653C))(this);
	}
	template <typename T = void> T OnTriggerEnterVacant(uintptr_t model) {
		return ((T (*)(VacantWallTransport*, uintptr_t))(Il2CppBase() + 0x43565F4))(this, model);
	}
	template <typename T = uintptr_t> T PlayerTriggerVacantWall(uintptr_t room, uintptr_t triggerCollider) {
		return ((T (*)(VacantWallTransport*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4356990))(this, room, triggerCollider);
	}
	template <typename T = uintptr_t> T PlayerTriggerVacantWall_1(uintptr_t aisle, uintptr_t triggerCollider) {
		return ((T (*)(VacantWallTransport*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4356A88))(this, aisle, triggerCollider);
	}
	template <typename T = uintptr_t> T ColliderFall(uintptr_t triggerCollider, Il2CppVector3 fallTargetPosition) {
		return ((T (*)(VacantWallTransport*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4356BD8))(this, triggerCollider, fallTargetPosition);
	}
	template <typename T = Il2CppVector3> static T GetFallTargetPosition(uintptr_t room) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4356D28))(0, room);
	}
	template <typename T = Il2CppVector3> static T GetFallTargetPosition_1(uintptr_t aisle, Il2CppVector3 prevPosition) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x4356EC8))(0, aisle, prevPosition);
	}
	template <typename T = bool> T IsPlayerCollider(uintptr_t collider) {
		return ((T (*)(VacantWallTransport*, uintptr_t))(Il2CppBase() + 0x4356774))(this, collider);
	}
	template <typename T = void> static T CustomControllerFallProcess(uintptr_t controller) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4356FA4))(0, controller);
	}

};

}
