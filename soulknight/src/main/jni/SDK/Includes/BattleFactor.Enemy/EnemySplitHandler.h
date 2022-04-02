#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BattleFactor.Enemy {

class EnemySplitHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleFactor.Enemy", "EnemySplitHandler"));
	}

	template <typename T = uintptr_t> T& Factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& EventNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& IdSet() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& Probability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MaxSplitCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SplitDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SplitHpRation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _enemySplitTagBuffers() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& FxColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Factor() {
		return ((T (*)(EnemySplitHandler*))(Il2CppBase() + 0x1B1C798))(this);
	}
	template <typename T = void*> T get_EventNames() {
		return ((T (*)(EnemySplitHandler*))(Il2CppBase() + 0x1B1C7A0))(this);
	}
	template <typename T = void*> T get_IdSet() {
		return ((T (*)(EnemySplitHandler*))(Il2CppBase() + 0x1B1C7A8))(this);
	}
	template <typename T = void> T MakeEffect(Il2CppString* eventName, uintptr_t target) {
		return ((T (*)(EnemySplitHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1B1C7B0))(this, eventName, target);
	}
	template <typename T = void> T SplitEnemy(uintptr_t origin, uintptr_t splitTag) {
		return ((T (*)(EnemySplitHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B1CBC4))(this, origin, splitTag);
	}
	template <typename T = void> static T ChildEnemyDelayShow(uintptr_t newEnemy) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B1D424))(0, newEnemy);
	}
	template <typename T = void> T ChildEnemyProcess(uintptr_t childEnemy, uintptr_t origin) {
		return ((T (*)(EnemySplitHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B1D8C4))(this, childEnemy, origin);
	}
	template <typename T = Il2CppVector3> static T GetChildEnemyPosition(uintptr_t originTransform, int32_t enemyIndex, int32_t enemyCount) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x1B1D090))(0, originTransform, enemyIndex, enemyCount);
	}
	template <typename T = void> static T OriginEnemyDestroy(uintptr_t origin) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1B1DDB4))(0, origin);
	}
	template <typename T = bool> T CanSplitEnemyCustom(uintptr_t target) {
		return ((T (*)(EnemySplitHandler*, uintptr_t))(Il2CppBase() + 0x1B1CA8C))(this, target);
	}

};

}
