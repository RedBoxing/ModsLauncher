#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TroopAchievement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TroopAchievement"));
	}

	template <typename T = Il2CppString*> static T& KeyHireAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& KeyFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& KeyRedWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& KeyTrinity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& KeyUpgradeAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& KeyPassAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& KeyDrink() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppString*> static T& KeyBadassAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppString*> static T& KeyAllSame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BronzeKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& SilverKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& GoldKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> static T RecordHire(uintptr_t hero, bool isTrinity) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x440753C))(0, hero, isTrinity);
	}
	template <typename T = void> static T CheckHire(bool isTrinity, bool needCheckPrize) {
		return ((T (*)(void *, bool, bool))(Il2CppBase() + 0x44076D0))(0, isTrinity, needCheckPrize);
	}
	template <typename T = void> static T RecordFire() {
		return ((T (*)(void *))(Il2CppBase() + 0x4407D30))(0);
	}
	template <typename T = void> static T RecordRedWeapon() {
		return ((T (*)(void *))(Il2CppBase() + 0x4407E94))(0);
	}
	template <typename T = void> static T RecordTrinity() {
		return ((T (*)(void *))(Il2CppBase() + 0x4407FF8))(0);
	}
	template <typename T = void> static T PassGame(uintptr_t hero, uintptr_t passLevel, bool isTrinity) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x440815C))(0, hero, passLevel, isTrinity);
	}
	template <typename T = void> static T CheckPassGameAchievement(bool isTrinity, bool needCheckPrize) {
		return ((T (*)(void *, bool, bool))(Il2CppBase() + 0x440837C))(0, isTrinity, needCheckPrize);
	}
	template <typename T = void> static T RecordSameHero() {
		return ((T (*)(void *))(Il2CppBase() + 0x4408968))(0);
	}
	template <typename T = void> static T RecordDrink() {
		return ((T (*)(void *))(Il2CppBase() + 0x4408B10))(0);
	}
	template <typename T = void> static T CheckSeasonPrize() {
		return ((T (*)(void *))(Il2CppBase() + 0x4407930))(0);
	}

};

}
