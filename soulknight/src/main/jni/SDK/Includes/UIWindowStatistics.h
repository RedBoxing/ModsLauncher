#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowStatistics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowStatistics"));
	}

	template <typename T = uintptr_t> T& weaponRoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& battleRoot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& plantRoot() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& skinRoot() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& weaponText() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C1288))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C13F4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C1450))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C14AC))(this);
	}
	template <typename T = void> T ShowWindow(uintptr_t exhibiteType) {
		return ((T (*)(UIWindowStatistics*, uintptr_t))(Il2CppBase() + 0x45C17E0))(this, exhibiteType);
	}
	template <typename T = void> T FlushWeapon() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C1A30))(this);
	}
	template <typename T = void> T FlushBattle() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C1CE8))(this);
	}
	template <typename T = void> T FlushPlant() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C2EB0))(this);
	}
	template <typename T = void> T FlushSkin() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C3078))(this);
	}
	template <typename T = void> T CloseBtnClick() {
		return ((T (*)(UIWindowStatistics*))(Il2CppBase() + 0x45C15C8))(this);
	}

};

}
