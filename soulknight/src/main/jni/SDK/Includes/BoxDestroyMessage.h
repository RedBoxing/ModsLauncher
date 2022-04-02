#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BoxDestroyMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoxDestroyMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(BoxDestroyMessage*, uintptr_t))(Il2CppBase() + 0x20A2FCC))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(BoxDestroyMessage*, uintptr_t))(Il2CppBase() + 0x20A30A0))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(BoxDestroyMessage*, uintptr_t))(Il2CppBase() + 0x20A3174))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(BoxDestroyMessage*, uintptr_t))(Il2CppBase() + 0x20A317C))(this, P0);
	}

};

}
