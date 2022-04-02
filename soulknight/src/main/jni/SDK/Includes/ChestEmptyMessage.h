#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChestEmptyMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestEmptyMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(ChestEmptyMessage*, uintptr_t))(Il2CppBase() + 0x187A030))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(ChestEmptyMessage*, uintptr_t))(Il2CppBase() + 0x187A104))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(ChestEmptyMessage*, uintptr_t))(Il2CppBase() + 0x187A1D8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(ChestEmptyMessage*, uintptr_t))(Il2CppBase() + 0x187A1E0))(this, P0);
	}

};

}
