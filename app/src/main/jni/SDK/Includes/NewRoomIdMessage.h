#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NewRoomIdMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NewRoomIdMessage"));
	}

	template <typename T = Il2CppString*> T& roomId() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(NewRoomIdMessage*, uintptr_t))(Il2CppBase() + 0x4520F5C))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(NewRoomIdMessage*, uintptr_t))(Il2CppBase() + 0x4521030))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(NewRoomIdMessage*, uintptr_t))(Il2CppBase() + 0x4521104))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(NewRoomIdMessage*, uintptr_t))(Il2CppBase() + 0x452110C))(this, P0);
	}

};

}
