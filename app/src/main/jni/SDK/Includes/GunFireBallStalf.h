#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunFireBallStalf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunFireBallStalf"));
	}

	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = int32_t> T& range() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(GunFireBallStalf*))(Il2CppBase() + 0x2496CD8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(GunFireBallStalf*))(Il2CppBase() + 0x2496D38))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunFireBallStalf*))(Il2CppBase() + 0x2496DD0))(this);
	}
	template <typename T = void> T CreateFireBall() {
		return ((T (*)(GunFireBallStalf*))(Il2CppBase() + 0x2497090))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(GunFireBallStalf*))(Il2CppBase() + 0x24973E0))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(GunFireBallStalf*))(Il2CppBase() + 0x24974A8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunFireBallStalf*))(Il2CppBase() + 0x24974B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(GunFireBallStalf*))(Il2CppBase() + 0x24974B8))(this);
	}

};

}
