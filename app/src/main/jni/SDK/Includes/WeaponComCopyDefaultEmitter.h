#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComCopyDefaultEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComCopyDefaultEmitter"));
	}

	template <typename T = float> T& strength() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& oldParts() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> static T& _commonDataKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _copiedEmitters() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = uintptr_t> T OnEquipWeapon() {
		return ((T (*)(WeaponComCopyDefaultEmitter*))(Il2CppBase() + 0x2026050))(this);
	}
	template <typename T = void> T RecordParts() {
		return ((T (*)(WeaponComCopyDefaultEmitter*))(Il2CppBase() + 0x2026294))(this);
	}
	template <typename T = uintptr_t> T OnDropWeapon() {
		return ((T (*)(WeaponComCopyDefaultEmitter*))(Il2CppBase() + 0x2026870))(this);
	}
	template <typename T = void> T OnPartChanged(uintptr_t data) {
		return ((T (*)(WeaponComCopyDefaultEmitter*, uintptr_t))(Il2CppBase() + 0x2026C30))(this, data);
	}
	template <typename T = void> T CopyEmitter(Il2CppString* partName) {
		return ((T (*)(WeaponComCopyDefaultEmitter*, Il2CppString*))(Il2CppBase() + 0x202645C))(this, partName);
	}
	template <typename T = void> T RemoveEmitter() {
		return ((T (*)(WeaponComCopyDefaultEmitter*))(Il2CppBase() + 0x2026A6C))(this);
	}
	template <typename T = void> T OnEquipWeaponb__3_0() {
		return ((T (*)(WeaponComCopyDefaultEmitter*))(Il2CppBase() + 0x20270CC))(this);
	}
	template <typename T = void> T OnEquipWeaponb__3_1() {
		return ((T (*)(WeaponComCopyDefaultEmitter*))(Il2CppBase() + 0x2027170))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnEquipWeapon() {
		return ((T (*)(WeaponComCopyDefaultEmitter*))(Il2CppBase() + 0x2027220))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_OnDropWeapon() {
		return ((T (*)(WeaponComCopyDefaultEmitter*))(Il2CppBase() + 0x2027228))(this);
	}

};

}
