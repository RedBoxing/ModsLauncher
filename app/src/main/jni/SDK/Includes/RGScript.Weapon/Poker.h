#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class Poker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "Poker"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& pokerSprites() {
		return *(T*)((uintptr_t)this + 0x1E0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _suits() {
		return *(T*)((uintptr_t)this + 0x1E8);
	}
	template <typename T = bool> T& _isStraightFlush() {
		return *(T*)((uintptr_t)this + 0x1F0);
	}

	template <typename T = void> T RandomSuit(int32_t index, uintptr_t subWeapon) {
		return ((T (*)(Poker*, int32_t, uintptr_t))(Il2CppBase() + 0x43D26A8))(this, index, subWeapon);
	}
	template <typename T = void> T ResetSubWeapon() {
		return ((T (*)(Poker*))(Il2CppBase() + 0x43D2994))(this);
	}
	template <typename T = void> T OnSubWeaponReady(int32_t index, uintptr_t subWeapon) {
		return ((T (*)(Poker*, int32_t, uintptr_t))(Il2CppBase() + 0x43D2BB0))(this, index, subWeapon);
	}
	template <typename T = void> T CheckStraightFlush() {
		return ((T (*)(Poker*))(Il2CppBase() + 0x43D2C38))(this);
	}
	template <typename T = void> T ThrowWeapon(uintptr_t subContainer) {
		return ((T (*)(Poker*, uintptr_t))(Il2CppBase() + 0x43D2D6C))(this, subContainer);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(Poker*))(Il2CppBase() + 0x43D3290))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(Poker*))(Il2CppBase() + 0x43D3344))(this);
	}
	template <typename T = void> T iFixBaseProxy_ResetSubWeapon() {
		return ((T (*)(Poker*))(Il2CppBase() + 0x43D3400))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnSubWeaponReady(int32_t P0, uintptr_t P1) {
		return ((T (*)(Poker*, int32_t, uintptr_t))(Il2CppBase() + 0x43D3408))(this, P0, P1);
	}
	template <typename T = void> T iFixBaseProxy_ThrowWeapon(uintptr_t P0) {
		return ((T (*)(Poker*, uintptr_t))(Il2CppBase() + 0x43D3410))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(Poker*))(Il2CppBase() + 0x43D3418))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(Poker*))(Il2CppBase() + 0x43D3420))(this);
	}

};

}
