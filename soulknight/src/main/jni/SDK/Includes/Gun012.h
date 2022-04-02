#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun012
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun012"));
	}

	template <typename T = float> T& speed_correction() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = void*> T& OnStaffBulletCreate() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& _weaponStateListener() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}

	template <typename T = void> T add_OnStaffBulletCreate(void* value) {
		return ((T (*)(Gun012*, void*))(Il2CppBase() + 0x256FF0C))(this, value);
	}
	template <typename T = void> T remove_OnStaffBulletCreate(void* value) {
		return ((T (*)(Gun012*, void*))(Il2CppBase() + 0x256FFFC))(this, value);
	}
	template <typename T = bool> T get_petAtkAudio() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25700EC))(this);
	}
	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x257014C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25701AC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x2570250))(this);
	}
	template <typename T = void> T AdjustAngle() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25702BC))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x2570338))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x2570784))(this);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x2570834))(this);
	}
	template <typename T = bool> T iFixBaseProxy_get_petAtkAudio() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25708B4))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25708BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25708C4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25708CC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25708D4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(Gun012*))(Il2CppBase() + 0x25708DC))(this);
	}

};

}
