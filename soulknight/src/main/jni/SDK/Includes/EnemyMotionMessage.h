#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyMotionMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyMotionMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector2> T& direction() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& inertial() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector2> T& forceDirection() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(EnemyMotionMessage*, uintptr_t))(Il2CppBase() + 0x1FEE180))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(EnemyMotionMessage*, uintptr_t))(Il2CppBase() + 0x1FEE294))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(EnemyMotionMessage*, uintptr_t))(Il2CppBase() + 0x1FEE3A8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(EnemyMotionMessage*, uintptr_t))(Il2CppBase() + 0x1FEE3B0))(this, P0);
	}

};

}
