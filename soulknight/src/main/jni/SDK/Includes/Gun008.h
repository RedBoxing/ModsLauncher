#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun008
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun008"));
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
	template <typename T = bool> T& in_atk() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256C9E4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CAD4))(this);
	}
	template <typename T = void> T CalculateTotalTime() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CA60))(this);
	}
	template <typename T = void> T ResetShootInterval() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CB38))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CBAC))(this);
	}
	template <typename T = uintptr_t> T CreateBullet(int32_t totalCount) {
		return ((T (*)(Gun008*, int32_t))(Il2CppBase() + 0x256CC40))(this, totalCount);
	}
	template <typename T = void> T StopWeapon() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CD4C))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CDB8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CE40))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CE48))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopWeapon() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CE50))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(Gun008*))(Il2CppBase() + 0x256CE58))(this);
	}

};

}
