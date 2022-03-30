#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponSpecialEatable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSpecialEatable"));
	}

	template <typename T = Il2CppString*> T& animTriggerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& animAudioClip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& shouldSwitchAfterEat() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& talk() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& talkDelay() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& eatEffects() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& isSpecialWeapon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& interruptableCharacterSkills() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WeaponSpecialEatable*))(Il2CppBase() + 0x45FDF30))(this);
	}
	template <typename T = bool> T get_isSpecial() {
		return ((T (*)(WeaponSpecialEatable*))(Il2CppBase() + 0x45FDFE0))(this);
	}
	template <typename T = bool> T get_isFrontWeapon() {
		return ((T (*)(WeaponSpecialEatable*))(Il2CppBase() + 0x45FE040))(this);
	}
	template <typename T = void> T WeaponSpecial(bool isDown) {
		return ((T (*)(WeaponSpecialEatable*, bool))(Il2CppBase() + 0x45FE184))(this, isDown);
	}
	template <typename T = void> T TriggerAnim() {
		return ((T (*)(WeaponSpecialEatable*))(Il2CppBase() + 0x45FE4BC))(this);
	}
	template <typename T = void> T OnSpecialAnimFinish() {
		return ((T (*)(WeaponSpecialEatable*))(Il2CppBase() + 0x45FE780))(this);
	}
	template <typename T = void> T InterruptCharacterSkill() {
		return ((T (*)(WeaponSpecialEatable*))(Il2CppBase() + 0x45FE214))(this);
	}
	template <typename T = uintptr_t> T Talk(uintptr_t transform, Il2CppString* dialog, float delay) {
		return ((T (*)(WeaponSpecialEatable*, uintptr_t, Il2CppString*, float))(Il2CppBase() + 0x45FEAA8))(this, transform, dialog, delay);
	}

};

}
