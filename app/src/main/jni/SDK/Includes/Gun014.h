#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun014
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun014"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& has_delay() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& max_delay() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun014*))(Il2CppBase() + 0x2570CB4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(Gun014*))(Il2CppBase() + 0x2570D14))(this);
	}
	template <typename T = void> T AdjustAngle() {
		return ((T (*)(Gun014*))(Il2CppBase() + 0x2570D80))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun014*))(Il2CppBase() + 0x2570DFC))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(Gun014*))(Il2CppBase() + 0x2570F10))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun014*))(Il2CppBase() + 0x25710DC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(Gun014*))(Il2CppBase() + 0x25710E4))(this);
	}

};

}
