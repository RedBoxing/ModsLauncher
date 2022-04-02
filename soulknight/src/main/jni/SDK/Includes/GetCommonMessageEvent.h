#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GetCommonMessageEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GetCommonMessageEvent"));
	}

	template <typename T = uintptr_t> T& message() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
