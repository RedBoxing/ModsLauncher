#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShockInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShockInfo"));
	}

	template <typename T = int32_t> T& loop() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& center() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
