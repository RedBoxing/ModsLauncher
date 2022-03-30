#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGBTDelayCreate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGBTDelayCreate"));
	}

	template <typename T = uintptr_t> T& explode_obj() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& explode_size_multiply() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& has_effect() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& throughWall() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = bool> T& setScale() {
		return *(T*)((uintptr_t)this + 0xBD);
	}
	template <typename T = bool> T& has_dir() {
		return *(T*)((uintptr_t)this + 0xBE);
	}
	template <typename T = bool> T& invers_dir() {
		return *(T*)((uintptr_t)this + 0xBF);
	}
	template <typename T = bool> T& same_rot_with_move_dir() {
		return *(T*)((uintptr_t)this + 0xC0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGBTDelayCreate*))(Il2CppBase() + 0x1BB0864))(this);
	}
	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(RGBTDelayCreate*, uintptr_t))(Il2CppBase() + 0x1BB0988))(this, other);
	}
	template <typename T = uintptr_t> T CreatingBullet() {
		return ((T (*)(RGBTDelayCreate*))(Il2CppBase() + 0x1BB08D4))(this);
	}
	template <typename T = void> T CheckDestroyState() {
		return ((T (*)(RGBTDelayCreate*))(Il2CppBase() + 0x1BB0AA4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTriggerEnter2D(uintptr_t P0) {
		return ((T (*)(RGBTDelayCreate*, uintptr_t))(Il2CppBase() + 0x1BB0B40))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_CheckDestroyState() {
		return ((T (*)(RGBTDelayCreate*))(Il2CppBase() + 0x1BB0B48))(this);
	}

};

}
