#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyCreateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyCreateInfo"));
	}

	template <typename T = uintptr_t> T& enemyProto() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& startIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
