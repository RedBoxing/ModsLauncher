#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CustomMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& methodName() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(CustomMessage*, uintptr_t))(Il2CppBase() + 0x428487C))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(CustomMessage*, uintptr_t))(Il2CppBase() + 0x4284960))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(CustomMessage*, uintptr_t))(Il2CppBase() + 0x4284A44))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(CustomMessage*, uintptr_t))(Il2CppBase() + 0x4284A4C))(this, P0);
	}

};

}
