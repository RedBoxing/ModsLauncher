#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopAttribute"));
	}

	template <typename T = int32_t> T& max_armor() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& armor() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& skill_cd() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& this_skill_time() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& defence() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& OnArmorChanged() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> static T& armor_load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& armor_rate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> T& armor_time() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = uintptr_t> T get_master() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x44090F8))(this);
	}
	template <typename T = bool> T get_skill_ready() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x440919C))(this);
	}
	template <typename T = void> T AttributeUpdate() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x4409204))(this);
	}
	template <typename T = void> T add_OnArmorChanged(uintptr_t value) {
		return ((T (*)(TroopAttribute*, uintptr_t))(Il2CppBase() + 0x44092CC))(this, value);
	}
	template <typename T = void> T remove_OnArmorChanged(uintptr_t value) {
		return ((T (*)(TroopAttribute*, uintptr_t))(Il2CppBase() + 0x44093B8))(this, value);
	}
	template <typename T = float> T get_ArmorLoad() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x44094A4))(this);
	}
	template <typename T = float> T get_ArmorRate() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x44095FC))(this);
	}
	template <typename T = void> T ReSetArmorReload() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x4409754))(this);
	}
	template <typename T = void> T ArmorReload() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x44097B4))(this);
	}
	template <typename T = void> T TenaciousRestoreHp() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x4409D78))(this);
	}
	template <typename T = void> T RestoreArmor(int32_t value, bool showText) {
		return ((T (*)(TroopAttribute*, int32_t, bool))(Il2CppBase() + 0x44098B8))(this, value, showText);
	}
	template <typename T = void> T SkillReload() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x4409264))(this);
	}
	template <typename T = void> T SkillReload_1(float deltaTime) {
		return ((T (*)(TroopAttribute*, float))(Il2CppBase() + 0x4409E94))(this, deltaTime);
	}
	template <typename T = void> T ResetSkillTime() {
		return ((T (*)(TroopAttribute*))(Il2CppBase() + 0x4409F74))(this);
	}
	template <typename T = void> T ChangeDefenceTemp(int32_t defence, float duration) {
		return ((T (*)(TroopAttribute*, int32_t, float))(Il2CppBase() + 0x4409FD4))(this, defence, duration);
	}
	template <typename T = uintptr_t> T ChangingDefence(int32_t defence, float duration) {
		return ((T (*)(TroopAttribute*, int32_t, float))(Il2CppBase() + 0x440A074))(this, defence, duration);
	}

};

}
