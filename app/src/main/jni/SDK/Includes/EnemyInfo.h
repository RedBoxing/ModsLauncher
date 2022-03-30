#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyInfo"));
	}

	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& exEnemy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& generateConditions() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(EnemyInfo*))(Il2CppBase() + 0x41E3DC8))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> static T get_AllConditions() {
		return ((T (*)(void *))(Il2CppBase() + 0x41E3E28))(0);
	}

};

}
