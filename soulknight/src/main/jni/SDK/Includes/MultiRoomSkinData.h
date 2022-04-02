#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MultiRoomSkinData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MultiRoomSkinData"));
	}

	template <typename T = uintptr_t> T& unlockMethod() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& unlockValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
