#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateMpEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateMpEvent"));
	}

	template <typename T = int32_t> T& playerIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& percentage() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
