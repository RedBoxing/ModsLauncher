#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UseItemMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UseItemMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(UseItemMessage*, uintptr_t))(Il2CppBase() + 0x4401D90))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(UseItemMessage*, uintptr_t))(Il2CppBase() + 0x4401E74))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(UseItemMessage*, uintptr_t))(Il2CppBase() + 0x4401F58))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(UseItemMessage*, uintptr_t))(Il2CppBase() + 0x4401F60))(this, P0);
	}

};

}
