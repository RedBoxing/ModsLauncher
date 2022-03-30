#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RebornMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RebornMessage"));
	}

	template <typename T = int32_t> T& transformNetId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& value() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(RebornMessage*, uintptr_t))(Il2CppBase() + 0x42AFFD4))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(RebornMessage*, uintptr_t))(Il2CppBase() + 0x42B00B8))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(RebornMessage*, uintptr_t))(Il2CppBase() + 0x42B01A0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(RebornMessage*, uintptr_t))(Il2CppBase() + 0x42B01A8))(this, P0);
	}

};

}
