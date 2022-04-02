#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DamageTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageTrigger"));
	}

	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& critical() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& hit_object() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& scaleHitFxByBullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& repel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& criticFactor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& need_destory() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _carrier() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& buffMarks() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& modHits() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& effectTriggers() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& has_ice_buff() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& OnHitEnemyAction() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& onHitSomething() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> T get_carrier() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x42D2F4C))(this);
	}
	template <typename T = uintptr_t> T get_parentCtrl() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x42D31B4))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x42D32F0))(this);
	}
	template <typename T = void> T ChangeColor(uintptr_t targetColor, uintptr_t hitObject) {
		return ((T (*)(DamageTrigger*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42D33A0))(this, targetColor, hitObject);
	}
	template <typename T = void> T Enlarge(int32_t deltaDmg, int32_t deltaCritic, float deltaSize, Il2CppString* mark) {
		return ((T (*)(DamageTrigger*, int32_t, int32_t, float, Il2CppString*))(Il2CppBase() + 0x42D3448))(this, deltaDmg, deltaCritic, deltaSize, mark);
	}
	template <typename T = bool> T IsLargable(Il2CppString* mark) {
		return ((T (*)(DamageTrigger*, Il2CppString*))(Il2CppBase() + 0x42D3640))(this, mark);
	}
	template <typename T = void> T CastModTrigger() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x42D3754))(this);
	}
	template <typename T = void> T SetInfo(uintptr_t info) {
		return ((T (*)(DamageTrigger*, uintptr_t))(Il2CppBase() + 0x42D3A18))(this, info);
	}
	template <typename T = void> T HandleCritical() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x42D3AE4))(this);
	}
	template <typename T = void> T AddEffectTrigger(uintptr_t trigger) {
		return ((T (*)(DamageTrigger*, uintptr_t))(Il2CppBase() + 0x42D3C80))(this, trigger);
	}
	template <typename T = void> T RemoveEffectTrigger(uintptr_t trigger) {
		return ((T (*)(DamageTrigger*, uintptr_t))(Il2CppBase() + 0x42D3E54))(this, trigger);
	}
	template <typename T = void> T RemoveAllEffect() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x42D4190))(this);
	}
	template <typename T = void> T DestroyBullet(uintptr_t other) {
		return ((T (*)(DamageTrigger*, uintptr_t))(Il2CppBase() + 0x42D42E8))(this, other);
	}
	template <typename T = void> T UpdateCriticFactor() {
		return ((T (*)(DamageTrigger*))(Il2CppBase() + 0x42D445C))(this);
	}
	template <typename T = void> T add_onHitSomething(void* value) {
		return ((T (*)(DamageTrigger*, void*))(Il2CppBase() + 0x42D44B8))(this, value);
	}
	template <typename T = void> T remove_onHitSomething(void* value) {
		return ((T (*)(DamageTrigger*, void*))(Il2CppBase() + 0x42D45A4))(this, value);
	}
	template <typename T = void> T OnHitSomething(uintptr_t obj) {
		return ((T (*)(DamageTrigger*, uintptr_t))(Il2CppBase() + 0x42D4690))(this, obj);
	}
	template <typename T = void> T OnHitEnemy(bool isCritical, int32_t dmg, uintptr_t enemy, uintptr_t hitObj) {
		return ((T (*)(DamageTrigger*, bool, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42D474C))(this, isCritical, dmg, enemy, hitObj);
	}

};

}
