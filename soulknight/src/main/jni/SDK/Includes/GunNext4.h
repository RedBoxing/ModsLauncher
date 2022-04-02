#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunNext4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunNext4"));
	}

	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& delayTotal() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = bool> T& in_atk() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& gunPoints() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x2166B08))(this);
	}
	template <typename T = void> T CalculateTotalTime() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x2166CA0))(this);
	}
	template <typename T = void> T ResetShootInterval() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x2166D14))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x2166D88))(this);
	}
	template <typename T = uintptr_t> T CreatingBullet(int32_t totalCount) {
		return ((T (*)(GunNext4*, int32_t))(Il2CppBase() + 0x2166E1C))(this, totalCount);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x2166F28))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x21671B4))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x2167220))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x21672B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x21672B8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(GunNext4*))(Il2CppBase() + 0x21672C0))(this);
	}

};

}
