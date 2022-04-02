#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PositionMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(PositionMessage*, uintptr_t))(Il2CppBase() + 0x43A09C4))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(PositionMessage*, uintptr_t))(Il2CppBase() + 0x43A0AAC))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(PositionMessage*, uintptr_t))(Il2CppBase() + 0x43A0B94))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(PositionMessage*, uintptr_t))(Il2CppBase() + 0x43A0B9C))(this, P0);
	}

};

}
