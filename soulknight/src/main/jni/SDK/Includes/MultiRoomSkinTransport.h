#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinTransport
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinTransport"));
	}

	template <typename T = Il2CppVector3> T& transport() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnTriggerEnter2D(uintptr_t other) {
		return ((T (*)(MultiRoomSkinTransport*, uintptr_t))(Il2CppBase() + 0x437A7A0))(this, other);
	}

};

}
