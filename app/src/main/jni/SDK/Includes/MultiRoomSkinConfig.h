#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> static T TryUnlockItemLockedBySeriesSkin(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43771A0))(0, e);
	}

};

}
