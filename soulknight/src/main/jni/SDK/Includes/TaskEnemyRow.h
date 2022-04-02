#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TaskEnemyRow
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskEnemyRow"));
	}

	template <typename T = Il2CppString*> T& enemyId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& rank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
