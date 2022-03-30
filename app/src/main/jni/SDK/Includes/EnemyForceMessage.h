#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyForceMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyForceMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& inertial() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& direction() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(EnemyForceMessage*, uintptr_t))(Il2CppBase() + 0x1FE90AC))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(EnemyForceMessage*, uintptr_t))(Il2CppBase() + 0x1FE91A0))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(EnemyForceMessage*, uintptr_t))(Il2CppBase() + 0x1FE9294))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(EnemyForceMessage*, uintptr_t))(Il2CppBase() + 0x1FE929C))(this, P0);
	}

};

}
