#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrefabPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabPool"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _usingGameObjects() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& _unusedGameObjects() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& _cachedFields() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x43A2628))(this);
	}
	template <typename T = void> T CacheBullet(uintptr_t bullet, bool isEnemyBullet) {
		return ((T (*)(PrefabPool*, uintptr_t, bool))(Il2CppBase() + 0x43A2754))(this, bullet, isEnemyBullet);
	}
	template <typename T = bool> T CheckFieldAndCacheBullet(uintptr_t controller, uintptr_t fieldInfo) {
		return ((T (*)(PrefabPool*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43A2A58))(this, controller, fieldInfo);
	}
	template <typename T = void> T OnEnemyCreate(uintptr_t e) {
		return ((T (*)(PrefabPool*, uintptr_t))(Il2CppBase() + 0x43A2C64))(this, e);
	}
	template <typename T = void> T OnWeaponPickedUp(uintptr_t e) {
		return ((T (*)(PrefabPool*, uintptr_t))(Il2CppBase() + 0x43A306C))(this, e);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x43A31F0))(this);
	}
	template <typename T = void> T ClearAllUsing() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x43A3774))(this);
	}
	template <typename T = void> T ClearInvalidObjects() {
		return ((T (*)(PrefabPool*))(Il2CppBase() + 0x43A3944))(this);
	}
	template <typename T = bool> static T UsePool(uintptr_t origin) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43A3ED8))(0, origin);
	}
	template <typename T = uintptr_t> T Take(uintptr_t origin, Il2CppVector3 position, Il2CppQuaternion rotation, bool invokeOnTake) {
		return ((T (*)(PrefabPool*, uintptr_t, Il2CppVector3, Il2CppQuaternion, bool))(Il2CppBase() + 0x43A40E8))(this, origin, position, rotation, invokeOnTake);
	}
	template <typename T = uintptr_t> T Take_1(uintptr_t origin, bool invokeOnTake) {
		return ((T (*)(PrefabPool*, uintptr_t, bool))(Il2CppBase() + 0x43A4634))(this, origin, invokeOnTake);
	}
	template <typename T = void> T Store(uintptr_t target) {
		return ((T (*)(PrefabPool*, uintptr_t))(Il2CppBase() + 0x43957B4))(this, target);
	}
	template <typename T = void> T RemoveUsingObject(uintptr_t target) {
		return ((T (*)(PrefabPool*, uintptr_t))(Il2CppBase() + 0x43A477C))(this, target);
	}

};

}
