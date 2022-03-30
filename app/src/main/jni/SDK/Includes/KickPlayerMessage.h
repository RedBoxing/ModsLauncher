#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KickPlayerMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KickPlayerMessage"));
	}

	template <typename T = uintptr_t> T& disconnType() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(KickPlayerMessage*, uintptr_t))(Il2CppBase() + 0x425714C))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(KickPlayerMessage*, uintptr_t))(Il2CppBase() + 0x4257220))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(KickPlayerMessage*, uintptr_t))(Il2CppBase() + 0x42572F4))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(KickPlayerMessage*, uintptr_t))(Il2CppBase() + 0x42572FC))(this, P0);
	}

};

}
