#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RigidBodyVelocityLimitation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RigidBodyVelocityLimitation"));
	}

	template <typename T = float> T& max() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rigidBody() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RigidBodyVelocityLimitation*))(Il2CppBase() + 0x1BE9358))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RigidBodyVelocityLimitation*))(Il2CppBase() + 0x1BE93F0))(this);
	}

};

}
