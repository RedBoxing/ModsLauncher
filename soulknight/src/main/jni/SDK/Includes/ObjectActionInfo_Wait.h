#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectActionInfoWait
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectActionInfo_Wait"));
	}

	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
