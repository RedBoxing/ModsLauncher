#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ClientNetTransformNotReadyMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientNetTransformNotReadyMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(ClientNetTransformNotReadyMessage*, uintptr_t))(Il2CppBase() + 0x1E76ED8))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(ClientNetTransformNotReadyMessage*, uintptr_t))(Il2CppBase() + 0x1E76FAC))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(ClientNetTransformNotReadyMessage*, uintptr_t))(Il2CppBase() + 0x1E77080))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(ClientNetTransformNotReadyMessage*, uintptr_t))(Il2CppBase() + 0x1E77088))(this, P0);
	}

};

}
