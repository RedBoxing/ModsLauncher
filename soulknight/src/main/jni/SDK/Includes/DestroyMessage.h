#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DestroyMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestroyMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(DestroyMessage*, uintptr_t))(Il2CppBase() + 0x42EC174))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(DestroyMessage*, uintptr_t))(Il2CppBase() + 0x42EC258))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(DestroyMessage*, uintptr_t))(Il2CppBase() + 0x42EC33C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(DestroyMessage*, uintptr_t))(Il2CppBase() + 0x42EC344))(this, P0);
	}

};

}
