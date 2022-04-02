#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyDeadInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyDeadInfo"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& sourceId() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
