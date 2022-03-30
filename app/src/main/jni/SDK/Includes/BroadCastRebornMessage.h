#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BroadCastRebornMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BroadCastRebornMessage"));
	}

	template <typename T = uint32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(BroadCastRebornMessage*, uintptr_t))(Il2CppBase() + 0x20A392C))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(BroadCastRebornMessage*, uintptr_t))(Il2CppBase() + 0x20A3A00))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(BroadCastRebornMessage*, uintptr_t))(Il2CppBase() + 0x20A3AD4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(BroadCastRebornMessage*, uintptr_t))(Il2CppBase() + 0x20A3ADC))(this, P0);
	}

};

}
