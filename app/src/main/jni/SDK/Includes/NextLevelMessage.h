#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NextLevelMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NextLevelMessage"));
	}

	template <typename T = Il2CppString*> T& branch() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(NextLevelMessage*, uintptr_t))(Il2CppBase() + 0x45246D8))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(NextLevelMessage*, uintptr_t))(Il2CppBase() + 0x45247AC))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(NextLevelMessage*, uintptr_t))(Il2CppBase() + 0x4524880))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(NextLevelMessage*, uintptr_t))(Il2CppBase() + 0x4524888))(this, P0);
	}

};

}
