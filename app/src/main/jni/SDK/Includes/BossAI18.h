#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossAI18
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossAI18"));
	}

	template <typename T = uintptr_t> T& bullet01() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = uintptr_t> T& bullet02() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}
	template <typename T = uintptr_t> T& bullet03() {
		return *(T*)((uintptr_t)this + 0x2D0);
	}
	template <typename T = uintptr_t> T& bullet04() {
		return *(T*)((uintptr_t)this + 0x2D8);
	}
	template <typename T = uintptr_t> T& bullet05() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = uintptr_t> T& bullet06() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = uintptr_t> T& tombstone_obj01() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = uintptr_t> T& tombstone_obj02() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = uintptr_t> T& point_1() {
		return *(T*)((uintptr_t)this + 0x300);
	}
	template <typename T = uintptr_t> T& forceAreaBullet() {
		return *(T*)((uintptr_t)this + 0x308);
	}
	template <typename T = float> T& forceMagnitude() {
		return *(T*)((uintptr_t)this + 0x310);
	}
	template <typename T = int32_t> T& tombstone01_max() {
		return *(T*)((uintptr_t)this + 0x314);
	}
	template <typename T = int32_t> T& tombstone02_max() {
		return *(T*)((uintptr_t)this + 0x318);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& spawn_tombstone01_dic() {
		return *(T*)((uintptr_t)this + 0x320);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& spawn_tombstone02_dic() {
		return *(T*)((uintptr_t)this + 0x328);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x29521BC))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2952390))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2952400))(this);
	}
	template <typename T = void> T StartAttack(int32_t index) {
		return ((T (*)(BossAI18*, int32_t))(Il2CppBase() + 0x2952658))(this, index);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x29527A8))(this);
	}
	template <typename T = void> T GetHurt(int32_t damage, uintptr_t source_object) {
		return ((T (*)(BossAI18*, int32_t, uintptr_t))(Il2CppBase() + 0x2952B24))(this, damage, source_object);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2952CA0))(this);
	}
	template <typename T = void> T OnBossRoomClear() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2952D7C))(this);
	}
	template <typename T = void> T InAtk01() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2952E80))(this);
	}
	template <typename T = void> T InAtk02() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x29531DC))(this);
	}
	template <typename T = void> T EndAtk02() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x29534A0))(this);
	}
	template <typename T = void> T UpdateAllTombStoneDic() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x29525E8))(this);
	}
	template <typename T = void> T UpdateTombStoneDic(Il2CppDictionary<uintptr_t, uintptr_t>* tombstone_dic) {
		return ((T (*)(BossAI18*, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x295356C))(this, tombstone_dic);
	}
	template <typename T = uintptr_t> T GetRandomTombStone() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x29538B4))(this);
	}
	template <typename T = void> T InAtk03() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2953A50))(this);
	}
	template <typename T = void> T EndAtk03() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2953E98))(this);
	}
	template <typename T = void> T InAtk04() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2953F84))(this);
	}
	template <typename T = void> T EndAtk04() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2954334))(this);
	}
	template <typename T = void> T EndAtk05() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2954400))(this);
	}
	template <typename T = void> T TrunWeaponLock() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x29544CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2954628))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2954630))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartAttack(int32_t P0) {
		return ((T (*)(BossAI18*, int32_t))(Il2CppBase() + 0x2954638))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2954640))(this);
	}
	template <typename T = void> T iFixBaseProxy_GetHurt(int32_t P0, uintptr_t P1) {
		return ((T (*)(BossAI18*, int32_t, uintptr_t))(Il2CppBase() + 0x2954648))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2954650))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnBossRoomClear() {
		return ((T (*)(BossAI18*))(Il2CppBase() + 0x2954658))(this);
	}

};

}
