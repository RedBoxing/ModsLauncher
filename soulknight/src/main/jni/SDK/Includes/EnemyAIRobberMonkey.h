#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIRobberMonkey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIRobberMonkey"));
	}

	template <typename T = bool> T& need_tap() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = Il2CppString*> T& weaponStateAnimKey() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = Il2CppString*> T& atkAnimKey() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& shootProbability() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = int32_t> T& switchProbability() {
		return *(T*)((uintptr_t)this + 0x254);
	}
	template <typename T = int32_t> T& w0Index() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = int32_t> T& w1Index() {
		return *(T*)((uintptr_t)this + 0x25C);
	}
	template <typename T = uintptr_t> T& h0Transform() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& h1Transform() {
		return *(T*)((uintptr_t)this + 0x268);
	}
	template <typename T = uintptr_t> T& releaseTransform0() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = uintptr_t> T& releaseTransform1() {
		return *(T*)((uintptr_t)this + 0x278);
	}
	template <typename T = uintptr_t> T& bullet0() {
		return *(T*)((uintptr_t)this + 0x280);
	}
	template <typename T = float> T& atk0Duration() {
		return *(T*)((uintptr_t)this + 0x288);
	}
	template <typename T = int32_t> T& atk0ReleaseTimes() {
		return *(T*)((uintptr_t)this + 0x28C);
	}
	template <typename T = uintptr_t> T& bullet1() {
		return *(T*)((uintptr_t)this + 0x290);
	}
	template <typename T = float> T& atk1Duration() {
		return *(T*)((uintptr_t)this + 0x298);
	}
	template <typename T = uintptr_t> T& atkClip0() {
		return *(T*)((uintptr_t)this + 0x2A0);
	}
	template <typename T = uintptr_t> T& atkClip1() {
		return *(T*)((uintptr_t)this + 0x2A8);
	}
	template <typename T = int32_t> T& _weaponStateAnimId() {
		return *(T*)((uintptr_t)this + 0x2B0);
	}
	template <typename T = int32_t> T& _atkAnimId() {
		return *(T*)((uintptr_t)this + 0x2B4);
	}
	template <typename T = uintptr_t> T& _atk0Coroutine() {
		return *(T*)((uintptr_t)this + 0x2B8);
	}
	template <typename T = uintptr_t> T& _atk1Coroutine() {
		return *(T*)((uintptr_t)this + 0x2C0);
	}
	template <typename T = void*> T& deadBodyCache() {
		return *(T*)((uintptr_t)this + 0x2C8);
	}

	template <typename T = bool> T get_CanShoot() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD3678))(this);
	}
	template <typename T = int32_t> T get_WeaponState() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD37D4))(this);
	}
	template <typename T = void> T set_WeaponState(int32_t value) {
		return ((T (*)(EnemyAIRobberMonkey*, int32_t))(Il2CppBase() + 0x1FD3850))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD38E4))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD3A70))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD3DB8))(this);
	}
	template <typename T = void> T SwitchWeapon() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD42DC))(this);
	}
	template <typename T = void> T ShootReflection() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD4354))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD4454))(this);
	}
	template <typename T = void> T ChildDead() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD48F8))(this);
	}
	template <typename T = void> T Atk0() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD49CC))(this);
	}
	template <typename T = uintptr_t> T Atk0Release() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD4A50))(this);
	}
	template <typename T = void> T Atk1() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD4B30))(this);
	}
	template <typename T = uintptr_t> T Atk1Release() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD4BB4))(this);
	}
	template <typename T = void> T StopMove() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD4C94))(this);
	}
	template <typename T = void> T Reborn() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD4D2C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedUpdate() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD508C))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD5094))(this);
	}
	template <typename T = void> T iFixBaseProxy_ShootReflection() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD509C))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD50A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_ChildDead() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD50AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopMove() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD50B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Reborn() {
		return ((T (*)(EnemyAIRobberMonkey*))(Il2CppBase() + 0x1FD50BC))(this);
	}

};

}
