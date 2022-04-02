#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ClientBackgroundMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientBackgroundMessage"));
	}

	template <typename T = bool> T& isBackground() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(ClientBackgroundMessage*, uintptr_t))(Il2CppBase() + 0x1E76D08))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(ClientBackgroundMessage*, uintptr_t))(Il2CppBase() + 0x1E76DE0))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(ClientBackgroundMessage*, uintptr_t))(Il2CppBase() + 0x1E76EB8))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(ClientBackgroundMessage*, uintptr_t))(Il2CppBase() + 0x1E76EC0))(this, P0);
	}

};

}
