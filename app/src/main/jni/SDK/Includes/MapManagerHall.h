#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerHall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerHall"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _controllers() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& pet() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& index2Plantpot() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& forge() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& mechRoom() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& officer() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& tvGold() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& heroCharPositionTf() {
		return *(T*)((uintptr_t)this + 0xE0);
	}

	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x4308420))(0);
	}
	template <typename T = void> T set_controllers(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(MapManagerHall*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x43084DC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_controllers() {
		return ((T (*)(MapManagerHall*))(Il2CppBase() + 0x4308550))(this);
	}
	template <typename T = bool> T get_officerNpcUnlocked() {
		return ((T (*)(MapManagerHall*))(Il2CppBase() + 0x43087C0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(MapManagerHall*))(Il2CppBase() + 0x4308868))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MapManagerHall*))(Il2CppBase() + 0x4308B98))(this);
	}
	template <typename T = void> T CheckHeroCharUnlockState() {
		return ((T (*)(MapManagerHall*))(Il2CppBase() + 0x43093FC))(this);
	}
	template <typename T = void> T CheckUnlockHeroChar(uintptr_t player, Il2CppString* blueprintName, Il2CppString* transformWeapon) {
		return ((T (*)(MapManagerHall*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4309810))(this, player, blueprintName, transformWeapon);
	}
	template <typename T = void> T CheckHeroCharMaterials(uintptr_t player, Il2CppString* blueprintName) {
		return ((T (*)(MapManagerHall*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x430993C))(this, player, blueprintName);
	}
	template <typename T = void> T OnChoseHero(uintptr_t controller) {
		return ((T (*)(MapManagerHall*, uintptr_t))(Il2CppBase() + 0x4309AB8))(this, controller);
	}
	template <typename T = void> T HandleBgm() {
		return ((T (*)(MapManagerHall*))(Il2CppBase() + 0x430938C))(this);
	}
	template <typename T = uintptr_t> T DelayBgm() {
		return ((T (*)(MapManagerHall*))(Il2CppBase() + 0x4309C38))(this);
	}
	template <typename T = void> T DelayBgmb__22_1(uintptr_t clip) {
		return ((T (*)(MapManagerHall*, uintptr_t))(Il2CppBase() + 0x4309D84))(this, clip);
	}
	template <typename T = void> T DelayBgmb__22_0(uintptr_t clip) {
		return ((T (*)(MapManagerHall*, uintptr_t))(Il2CppBase() + 0x4309D8C))(this, clip);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(MapManagerHall*))(Il2CppBase() + 0x4309D94))(this);
	}

};

}
