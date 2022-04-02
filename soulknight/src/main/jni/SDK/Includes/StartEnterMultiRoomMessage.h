#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StartEnterMultiRoomMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StartEnterMultiRoomMessage"));
	}

	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(StartEnterMultiRoomMessage*, uintptr_t))(Il2CppBase() + 0x429B2C0))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(StartEnterMultiRoomMessage*, uintptr_t))(Il2CppBase() + 0x429B394))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(StartEnterMultiRoomMessage*, uintptr_t))(Il2CppBase() + 0x429B468))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(StartEnterMultiRoomMessage*, uintptr_t))(Il2CppBase() + 0x429B470))(this, P0);
	}

};

}
