#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BoundingBox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoundingBox"));
	}

	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& size() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
