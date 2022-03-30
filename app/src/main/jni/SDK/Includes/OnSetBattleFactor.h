#pragma once
#include "Il2Cpp/Il2Cpp.h"

class OnSetBattleFactor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnSetBattleFactor"));
	}

	template <typename T = uintptr_t> T& factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isSet() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isRecord() {
		return *(T*)((uintptr_t)this + 0x15);
	}


};

}
