#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HeartMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HeartMessage"));
	}

	template <typename T = int64_t> T& sendTimeTick() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(HeartMessage*, uintptr_t))(Il2CppBase() + 0x1A32948))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(HeartMessage*, uintptr_t))(Il2CppBase() + 0x1A32A1C))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(HeartMessage*, uintptr_t))(Il2CppBase() + 0x1A32AF0))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(HeartMessage*, uintptr_t))(Il2CppBase() + 0x1A32AF8))(this, P0);
	}

};

}
