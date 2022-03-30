#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WaveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaveInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& melleEnemys() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& remoteEnemys() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& totalCost() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
