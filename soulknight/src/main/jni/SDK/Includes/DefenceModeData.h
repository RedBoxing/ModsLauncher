#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DefenceModeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefenceModeData"));
	}

	template <typename T = int32_t> static T& MaxBaseHp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& levelScene() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& waveIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& baseHp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& heroLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& weaponLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& batteryLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& batteriesInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& weaponWallQueue() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T SetHeroLevel(int32_t level) {
		return ((T (*)(DefenceModeData*, int32_t))(Il2CppBase() + 0x42E4C2C))(this, level);
	}
	template <typename T = void> T SetBatteryLevel(int32_t level) {
		return ((T (*)(DefenceModeData*, int32_t))(Il2CppBase() + 0x42E4E1C))(this, level);
	}
	template <typename T = void> T UpdateData() {
		return ((T (*)(DefenceModeData*))(Il2CppBase() + 0x42E4FC0))(this);
	}
	template <typename T = void> T ClearWallBatteryQueue() {
		return ((T (*)(DefenceModeData*))(Il2CppBase() + 0x42E50A4))(this);
	}
	template <typename T = void> T EnqueueWallBatteryCount(int32_t count) {
		return ((T (*)(DefenceModeData*, int32_t))(Il2CppBase() + 0x42E5144))(this, count);
	}
	template <typename T = int32_t> T GetFirstWallBatteryCount() {
		return ((T (*)(DefenceModeData*))(Il2CppBase() + 0x42E5200))(this);
	}

};

}
