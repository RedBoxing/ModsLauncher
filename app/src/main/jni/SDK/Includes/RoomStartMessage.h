#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomStartMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomStartMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(RoomStartMessage*, uintptr_t))(Il2CppBase() + 0x1802D80))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(RoomStartMessage*, uintptr_t))(Il2CppBase() + 0x1802E64))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(RoomStartMessage*, uintptr_t))(Il2CppBase() + 0x1802F48))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(RoomStartMessage*, uintptr_t))(Il2CppBase() + 0x1802F50))(this, P0);
	}

};

}
