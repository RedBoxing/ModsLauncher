#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBGravityInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBGravityInfo"));
	}

	template <typename T = int32_t> T& force() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& range() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
