#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun001
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun001"));
	}

	template <typename T = bool> T& has_trail() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& need_set_trigger_start() {
		return *(T*)((uintptr_t)this + 0x19D);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Gun001*))(Il2CppBase() + 0x461E0D8))(this);
	}
	template <typename T = void> T StartUseWeapon() {
		return ((T (*)(Gun001*))(Il2CppBase() + 0x461E22C))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun001*))(Il2CppBase() + 0x461E2F0))(this);
	}
	template <typename T = void> T Attack2() {
		return ((T (*)(Gun001*))(Il2CppBase() + 0x461E748))(this);
	}
	template <typename T = void> T CreateBullet(float speed, float angle) {
		return ((T (*)(Gun001*, float, float))(Il2CppBase() + 0x461E47C))(this, speed, angle);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Gun001*))(Il2CppBase() + 0x461E7BC))(this);
	}
	template <typename T = void> T iFixBaseProxy_StartUseWeapon() {
		return ((T (*)(Gun001*))(Il2CppBase() + 0x461E7C4))(this);
	}

};

}
