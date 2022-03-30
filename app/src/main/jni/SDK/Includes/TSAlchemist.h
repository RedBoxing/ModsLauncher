#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSAlchemist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSAlchemist"));
	}

	template <typename T = int32_t> T& bulletIndex() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSAlchemist*))(Il2CppBase() + 0x18C3D5C))(this);
	}
	template <typename T = uintptr_t> T ThrowingBullet() {
		return ((T (*)(TSAlchemist*))(Il2CppBase() + 0x18C3DE0))(this);
	}
	template <typename T = void> T ThrowBullet(uintptr_t bullet, int32_t multiCount) {
		return ((T (*)(TSAlchemist*, uintptr_t, int32_t))(Il2CppBase() + 0x18C3EC0))(this, bullet, multiCount);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSAlchemist*))(Il2CppBase() + 0x18C4228))(this);
	}

};

}
