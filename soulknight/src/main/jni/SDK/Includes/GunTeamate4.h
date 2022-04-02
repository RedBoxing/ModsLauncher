#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunTeamate4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunTeamate4"));
	}

	template <typename T = uintptr_t> T& sprite_ready() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& sprite_cd() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& sprite_render() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& is_ready() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GunTeamate4*))(Il2CppBase() + 0x217FC60))(this);
	}
	template <typename T = void> T SetAttack(bool value1, bool setHandAttack) {
		return ((T (*)(GunTeamate4*, bool, bool))(Il2CppBase() + 0x217FD40))(this, value1, setHandAttack);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunTeamate4*))(Il2CppBase() + 0x2180334))(this);
	}
	template <typename T = void> T TurnReady() {
		return ((T (*)(GunTeamate4*))(Il2CppBase() + 0x2180390))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(GunTeamate4*))(Il2CppBase() + 0x2180430))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetAttack(bool P0, bool P1) {
		return ((T (*)(GunTeamate4*, bool, bool))(Il2CppBase() + 0x2180438))(this, P0, P1);
	}

};

}
