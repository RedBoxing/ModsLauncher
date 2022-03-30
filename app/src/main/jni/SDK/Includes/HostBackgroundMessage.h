#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HostBackgroundMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HostBackgroundMessage"));
	}

	template <typename T = bool> T& isBackground() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(HostBackgroundMessage*, uintptr_t))(Il2CppBase() + 0x4205CD4))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(HostBackgroundMessage*, uintptr_t))(Il2CppBase() + 0x4205DAC))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(HostBackgroundMessage*, uintptr_t))(Il2CppBase() + 0x4205E84))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(HostBackgroundMessage*, uintptr_t))(Il2CppBase() + 0x4205E8C))(this, P0);
	}

};

}
