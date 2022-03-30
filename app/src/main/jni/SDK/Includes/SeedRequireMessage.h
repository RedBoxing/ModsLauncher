#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SeedRequireMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SeedRequireMessage"));
	}

	template <typename T = int32_t> T& transformNetId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(SeedRequireMessage*, uintptr_t))(Il2CppBase() + 0x181FD28))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(SeedRequireMessage*, uintptr_t))(Il2CppBase() + 0x181FE0C))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(SeedRequireMessage*, uintptr_t))(Il2CppBase() + 0x181FEF0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(SeedRequireMessage*, uintptr_t))(Il2CppBase() + 0x181FEF8))(this, P0);
	}

};

}
