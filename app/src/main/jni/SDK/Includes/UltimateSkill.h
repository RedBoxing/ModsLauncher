#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UltimateSkill
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UltimateSkill"));
	}

	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& _emptyPositions() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& _currentEmptyPositions() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _random() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& _controllers() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _maskControllers() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _masks() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _triggers() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _triggeredBuffs() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& _buffTriggerPool() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& _characterMaskPool() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _counters() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = void*> T& _counterPool() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _swampBossUltimateFloor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _swampFloorObject() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _collisionNormal() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = float> T& emitBulletWait() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& bulletEmitFunc() {
		return *(T*)((uintptr_t)this + 0xC8);
	}

	template <typename T = int32_t> T get_AngryWeight() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8C5E8))(this);
	}
	template <typename T = int32_t> T get_NormalWeight() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8C6AC))(this);
	}
	template <typename T = int32_t> T get_NormalLevel() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8C770))(this);
	}
	template <typename T = void> T BossControllerStart(uintptr_t bossController) {
		return ((T (*)(UltimateSkill*, uintptr_t))(Il2CppBase() + 0x1B8CC5C))(this, bossController);
	}
	template <typename T = void> T AddNewCharacterMask() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8CA38))(this);
	}
	template <typename T = void> T AddNewCounter() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8D00C))(this);
	}
	template <typename T = uintptr_t> T GetBuffTrigger() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8D1A8))(this);
	}
	template <typename T = void> T AddNewBuffTrigger() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8C860))(this);
	}
	template <typename T = void> T RestoreBuffTrigger(uintptr_t controller, uintptr_t buffTrigger, uintptr_t buffObject) {
		return ((T (*)(UltimateSkill*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B8D278))(this, controller, buffTrigger, buffObject);
	}
	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8D3A8))(this);
	}
	template <typename T = void> T AddCounterToCharacter() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8DB70))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8DF28))(this);
	}
	template <typename T = void> T UpdateTriggers() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8E0A0))(this);
	}
	template <typename T = void> T InstantiateFinalExplode() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8F738))(this);
	}
	template <typename T = void> T InstantiateBuff() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8EAB4))(this);
	}
	template <typename T = void> T OnControllerEnterMask(uintptr_t controller) {
		return ((T (*)(UltimateSkill*, uintptr_t))(Il2CppBase() + 0x1B901D0))(this, controller);
	}
	template <typename T = void> T OnControllerLeaveMask(uintptr_t controller) {
		return ((T (*)(UltimateSkill*, uintptr_t))(Il2CppBase() + 0x1B902A4))(this, controller);
	}
	template <typename T = void> T InstantiateMask() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B8E664))(this);
	}
	template <typename T = uintptr_t> T GetCharacterMask(Il2CppVector2 maskPosition, uintptr_t currentController, float controllerBasicScale) {
		return ((T (*)(UltimateSkill*, Il2CppVector2, uintptr_t, float))(Il2CppBase() + 0x1B90378))(this, maskPosition, currentController, controllerBasicScale);
	}
	template <typename T = void> T ReleaseSkillb__32_0() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B90674))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_AngryWeight() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B90710))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_NormalWeight() {
		return ((T (*)(UltimateSkill*))(Il2CppBase() + 0x1B90714))(this);
	}

};

}
