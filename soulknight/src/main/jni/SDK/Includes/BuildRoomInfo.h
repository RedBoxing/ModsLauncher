#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuildRoomInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildRoomInfo"));
	}

	template <typename T = bool> T& isBadas() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& gameMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& factors() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
