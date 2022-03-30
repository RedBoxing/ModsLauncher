#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicFallBoss
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicFallBoss"));
	}

	template <typename T = uintptr_t> T& config() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsWarn() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& SafePosition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _controller() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _rigidbody2D() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& triggerTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = bool> T get_IsWarn() {
		return ((T (*)(RelicFallBoss*))(Il2CppBase() + 0x42C15B0))(this);
	}
	template <typename T = void> T set_IsWarn(bool value) {
		return ((T (*)(RelicFallBoss*, bool))(Il2CppBase() + 0x42C15B8))(this, value);
	}
	template <typename T = Il2CppVector3> T get_SafePosition() {
		return ((T (*)(RelicFallBoss*))(Il2CppBase() + 0x42C15C4))(this);
	}
	template <typename T = void> T set_SafePosition(Il2CppVector3 value) {
		return ((T (*)(RelicFallBoss*, Il2CppVector3))(Il2CppBase() + 0x42C15D0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RelicFallBoss*))(Il2CppBase() + 0x42C15DC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RelicFallBoss*))(Il2CppBase() + 0x42C168C))(this);
	}

};

}
