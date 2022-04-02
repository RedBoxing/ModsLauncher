#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBDelayDivision
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBDelayDivision"));
	}

	template <typename T = float> T& delay_time() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& c_audio_clip() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& c_count() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = int32_t> T& c_angle() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = int32_t> T& c_atk() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = int32_t> T& c_critical() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& c_bullet() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& c_bullet_speed() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& canInfluencedByBuff() {
		return *(T*)((uintptr_t)this + 0x134);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGBDelayDivision*))(Il2CppBase() + 0x1BAEDDC))(this);
	}
	template <typename T = void> T AdjustAngle() {
		return ((T (*)(RGBDelayDivision*))(Il2CppBase() + 0x1BAF018))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(RGBDelayDivision*))(Il2CppBase() + 0x1BAF094))(this);
	}
	template <typename T = void> T StopBullet() {
		return ((T (*)(RGBDelayDivision*))(Il2CppBase() + 0x1BAF17C))(this);
	}
	template <typename T = uintptr_t> T Division(float delay) {
		return ((T (*)(RGBDelayDivision*, float))(Il2CppBase() + 0x1BAF21C))(this, delay);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RGBDelayDivision*))(Il2CppBase() + 0x1BAF354))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(RGBDelayDivision*))(Il2CppBase() + 0x1BAF35C))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopBullet() {
		return ((T (*)(RGBDelayDivision*))(Il2CppBase() + 0x1BAF364))(this);
	}

};

}
