#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerImageConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerImageConfig"));
	}

	template <typename T = Il2CppVector3> T& imagePosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& imageScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
