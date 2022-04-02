#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PsycheSpawnMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PsycheSpawnMessage"));
	}

	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(PsycheSpawnMessage*, uintptr_t))(Il2CppBase() + 0x1BA11B4))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(PsycheSpawnMessage*, uintptr_t))(Il2CppBase() + 0x1BA12AC))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(PsycheSpawnMessage*, uintptr_t))(Il2CppBase() + 0x1BA1384))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(PsycheSpawnMessage*, uintptr_t))(Il2CppBase() + 0x1BA138C))(this, P0);
	}

};

}
