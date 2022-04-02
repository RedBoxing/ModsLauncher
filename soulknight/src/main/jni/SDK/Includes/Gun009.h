#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Gun009
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Gun009"));
	}

	template <typename T = bool> T& has_delay() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& max_delay() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = int32_t> T& reflectCount() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = bool> T& needSetTargetPos() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = uintptr_t> T get_default_type() {
		return ((T (*)(Gun009*))(Il2CppBase() + 0x256D288))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(Gun009*, bool, bool))(Il2CppBase() + 0x256D2E8))(this, value1, setHandAttack);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(Gun009*))(Il2CppBase() + 0x256D398))(this);
	}
	template <typename T = void> T CreateBullet() {
		return ((T (*)(Gun009*))(Il2CppBase() + 0x256D448))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_get_default_type() {
		return ((T (*)(Gun009*))(Il2CppBase() + 0x256D644))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(Gun009*, bool, bool))(Il2CppBase() + 0x256D64C))(this, P0, P1);
	}

};

}
