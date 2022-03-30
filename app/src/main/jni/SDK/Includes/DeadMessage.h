#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DeadMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeadMessage"));
	}

	template <typename T = int32_t> T& transfromId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& killerId() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(DeadMessage*, uintptr_t))(Il2CppBase() + 0x42DE200))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(DeadMessage*, uintptr_t))(Il2CppBase() + 0x42DE2E4))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(DeadMessage*, uintptr_t))(Il2CppBase() + 0x42DE3C8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(DeadMessage*, uintptr_t))(Il2CppBase() + 0x42DE3D0))(this, P0);
	}

};

}
