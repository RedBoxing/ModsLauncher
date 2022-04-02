#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReadyToTargetSceneMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReadyToTargetSceneMessage"));
	}

	template <typename T = Il2CppString*> T& value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(ReadyToTargetSceneMessage*, uintptr_t))(Il2CppBase() + 0x44DDEE4))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(ReadyToTargetSceneMessage*, uintptr_t))(Il2CppBase() + 0x44DDFB8))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(ReadyToTargetSceneMessage*, uintptr_t))(Il2CppBase() + 0x44DE08C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(ReadyToTargetSceneMessage*, uintptr_t))(Il2CppBase() + 0x44DE094))(this, P0);
	}

};

}
