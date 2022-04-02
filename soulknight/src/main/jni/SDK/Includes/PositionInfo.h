#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PositionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionInfo"));
	}

	template <typename T = Il2CppVector2> T& size() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector2> T& offset() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
