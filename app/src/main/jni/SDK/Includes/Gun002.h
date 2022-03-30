#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun002
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun002"));
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

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun002*))(Il2CppBase() + 0x461ECCC))(this);
	}
	template <typename T = void> T AdjustAngle() {
		return ((T (*)(Gun002*))(Il2CppBase() + 0x461ED2C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun002*))(Il2CppBase() + 0x461EDA8))(this);
	}
	template <typename T = void> T CreateBullet(int32_t i) {
		return ((T (*)(Gun002*, int32_t))(Il2CppBase() + 0x461EEDC))(this, i);
	}
	template <typename T = void> T OnTypicalChange() {
		return ((T (*)(Gun002*))(Il2CppBase() + 0x461F1B8))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun002*))(Il2CppBase() + 0x461F250))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTypicalChange() {
		return ((T (*)(Gun002*))(Il2CppBase() + 0x461F258))(this);
	}

};

}
