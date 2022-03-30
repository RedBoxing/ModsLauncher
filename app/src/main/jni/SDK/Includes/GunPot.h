#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunPot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunPot"));
	}

	template <typename T = uintptr_t> T& emptySprite() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& drinkClip() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& hp() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = int32_t> T& energy() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& oneshot() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = bool> T& isEmpty() {
		return *(T*)((uintptr_t)this + 0x1B9);
	}
	template <typename T = uintptr_t> T& weaponSprite() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216EACC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216EB2C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216EC04))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunPot*, bool, bool))(Il2CppBase() + 0x216ECAC))(this, value1, setHandAttack);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216EDF8))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216F6B4))(this);
	}
	template <typename T = void> T Prepare() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216F714))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t proto) {
		return ((T (*)(GunPot*, uintptr_t))(Il2CppBase() + 0x216F7A4))(this, proto);
	}
	template <typename T = void> T RestoreHp() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216F560))(this);
	}
	template <typename T = void> T RestoreEnergy() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216F610))(this);
	}
	template <typename T = void> T RestoreHpAndEnergy() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216F41C))(this);
	}
	template <typename T = void> T HandleTroop() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216F938))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_icons() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216FB3C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_texts() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x216FC68))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x217022C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x2170234))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x217023C))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunPot*, bool, bool))(Il2CppBase() + 0x2170244))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_CopyFrom(uintptr_t P0) {
		return ((T (*)(GunPot*, uintptr_t))(Il2CppBase() + 0x2170254))(this, P0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_icons() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x217025C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T iFixBaseProxy_get_texts() {
		return ((T (*)(GunPot*))(Il2CppBase() + 0x2170264))(this);
	}

};

}
