#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectActionInfoActivate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectActionInfo_Activate"));
	}

	template <typename T = bool> T& activate() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
