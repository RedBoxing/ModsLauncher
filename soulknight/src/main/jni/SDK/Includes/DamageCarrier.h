#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DamageCarrier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DamageCarrier"));
	}

	template <typename T = uintptr_t> T& damageType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& camp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& damageInfo() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& TargetObj() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _attachments() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = uintptr_t> T get_TargetObj() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428DFF0))(this);
	}
	template <typename T = void> T set_TargetObj(uintptr_t value) {
		return ((T (*)(DamageCarrier*, uintptr_t))(Il2CppBase() + 0x428DFF8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428E000))(this);
	}
	template <typename T = void> T UpdateInfo(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(DamageCarrier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x428E090))(this, bulletInfo, damageInfo);
	}
	template <typename T = void> T SetAttachment() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428E390))(this);
	}
	template <typename T = void> T UpdateInfoWithMotion(uintptr_t bulletInfo, uintptr_t damageInfo) {
		return ((T (*)(DamageCarrier*, uintptr_t, uintptr_t))(Il2CppBase() + 0x428E534))(this, bulletInfo, damageInfo);
	}
	template <typename T = uintptr_t> T GetBullet() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428E62C))(this);
	}
	template <typename T = bool> T HasDamageType(uintptr_t type) {
		return ((T (*)(DamageCarrier*, uintptr_t))(Il2CppBase() + 0x428E74C))(this, type);
	}
	template <typename T = bool> T get_IsPlayerBullet() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428E7C8))(this);
	}
	template <typename T = bool> T get_IsEnemyBullet() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428E830))(this);
	}
	template <typename T = bool> T IsAlliance(int32_t controllerCamp) {
		return ((T (*)(DamageCarrier*, int32_t))(Il2CppBase() + 0x428E898))(this, controllerCamp);
	}
	template <typename T = bool> T IsEnemy(int32_t controllerCamp) {
		return ((T (*)(DamageCarrier*, int32_t))(Il2CppBase() + 0x4273BC8))(this, controllerCamp);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(DamageCarrier*, uintptr_t))(Il2CppBase() + 0x428E924))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428E998))(this);
	}
	template <typename T = void> T OnSplit(int32_t index, uintptr_t splitConfig) {
		return ((T (*)(DamageCarrier*, int32_t, uintptr_t))(Il2CppBase() + 0x428E9F8))(this, index, splitConfig);
	}
	template <typename T = void> T RefreshInfo() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428EA70))(this);
	}
	template <typename T = int32_t> T GetCampFromSource(uintptr_t source) {
		return ((T (*)(DamageCarrier*, uintptr_t))(Il2CppBase() + 0x428EB40))(this, source);
	}
	template <typename T = void> T HandleTroop() {
		return ((T (*)(DamageCarrier*))(Il2CppBase() + 0x428E1E8))(this);
	}

};

}
