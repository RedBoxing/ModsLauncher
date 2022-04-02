#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerDeadMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerDeadMessage"));
	}

	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(PlayerDeadMessage*, uintptr_t))(Il2CppBase() + 0x439AA9C))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(PlayerDeadMessage*, uintptr_t))(Il2CppBase() + 0x439AB70))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(PlayerDeadMessage*, uintptr_t))(Il2CppBase() + 0x439AC44))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(PlayerDeadMessage*, uintptr_t))(Il2CppBase() + 0x439AC4C))(this, P0);
	}

};

}
