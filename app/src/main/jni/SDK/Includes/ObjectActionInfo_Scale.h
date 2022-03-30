#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectActionInfoScale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectActionInfo_Scale"));
	}

	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& set() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
