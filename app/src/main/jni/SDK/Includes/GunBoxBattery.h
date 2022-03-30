#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunBoxBattery
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunBoxBattery"));
	}

	template <typename T = int32_t> T& maxUseTimes() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = int32_t> T& size() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = uintptr_t> T& batteryType() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x25825D8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x2582644))(this);
	}
	template <typename T = bool> T Placable(Il2CppVector3 position) {
		return ((T (*)(GunBoxBattery*, Il2CppVector3))(Il2CppBase() + 0x25827C8))(this, position);
	}
	template <typename T = void> T MakeConsume() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x2582864))(this);
	}
	template <typename T = void> T OnPreviewPositionChanged() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x2582A4C))(this);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x2582D0C))(this);
	}
	template <typename T = void> T FlushIcon(bool leave) {
		return ((T (*)(GunBoxBattery*, bool))(Il2CppBase() + 0x2582E64))(this, leave);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x25830AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x25830B0))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Placable(Il2CppVector3 P0) {
		return ((T (*)(GunBoxBattery*, Il2CppVector3))(Il2CppBase() + 0x25830B8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_MakeConsume() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x25830BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnPreviewPositionChanged() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x25830C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(GunBoxBattery*))(Il2CppBase() + 0x25830C8))(this);
	}
	template <typename T = void> T iFixBaseProxy_FlushIcon(bool P0) {
		return ((T (*)(GunBoxBattery*, bool))(Il2CppBase() + 0x25830CC))(this, P0);
	}

};

}
