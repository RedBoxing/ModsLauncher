#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CellerAisleCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CellerAisleCreator"));
	}

	template <typename T = uintptr_t> T& exhibiteType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& directSign() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& barrier() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fixPositionTrans() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& offsetHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& lengthNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& lengthLarge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& length() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isLastLarge() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& createDone() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = int32_t> T& fixPositionLength() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = void*> static T& weaponsNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppVector3> T& floorOffset() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = uintptr_t> T get_museum() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186A350))(this);
	}
	template <typename T = uintptr_t> T get_booth() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186A3E0))(this);
	}
	template <typename T = uintptr_t> T get_boothLarge() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186A454))(this);
	}
	template <typename T = uintptr_t> T get_seasonPrize() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186A4C8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186A53C))(this);
	}
	template <typename T = void> T MoveFixPosition() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186A680))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186A8B8))(this);
	}
	template <typename T = uintptr_t> T CreateAisle() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186A928))(this);
	}
	template <typename T = uintptr_t> T CreateWeapons() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186AA08))(this);
	}
	template <typename T = void*> static T GetExhibiteWeaponNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x186AAE8))(0);
	}
	template <typename T = uintptr_t> T CreateEnemy() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186B7CC))(this);
	}
	template <typename T = uintptr_t> T CreateCharactor() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186B8AC))(this);
	}
	template <typename T = uintptr_t> T CreateAchievement() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186B98C))(this);
	}
	template <typename T = uintptr_t> T CreatePlant() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186BA6C))(this);
	}
	template <typename T = uintptr_t> T CreateNpc() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186BB4C))(this);
	}
	template <typename T = uintptr_t> T CreateSeasonPrize() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186BC2C))(this);
	}
	template <typename T = uintptr_t> T CreateBooth(bool isLarge) {
		return ((T (*)(CellerAisleCreator*, bool))(Il2CppBase() + 0x186BD0C))(this, isLarge);
	}
	template <typename T = uintptr_t> T createSeasonPrizeGa() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186BF0C))(this);
	}
	template <typename T = uintptr_t> T CreateFloors() {
		return ((T (*)(CellerAisleCreator*))(Il2CppBase() + 0x186C0A4))(this);
	}

};

}
