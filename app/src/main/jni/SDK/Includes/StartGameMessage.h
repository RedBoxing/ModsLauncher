#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StartGameMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartGameMessage"));
	}

	template <typename T = int32_t> T& progressIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(StartGameMessage*, uintptr_t))(Il2CppBase() + 0x429B480))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(StartGameMessage*, uintptr_t))(Il2CppBase() + 0x429B554))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(StartGameMessage*, uintptr_t))(Il2CppBase() + 0x429B628))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(StartGameMessage*, uintptr_t))(Il2CppBase() + 0x429B630))(this, P0);
	}

};

}
