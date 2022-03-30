#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTPlayRewardsItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTPlayRewardsItem"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& typeId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = double> T& value() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
