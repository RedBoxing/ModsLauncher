#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyInfos
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyInfos"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<uintptr_t>*>*> T& scene2Enemy() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x1FEDCD0))(0);
	}
	template <typename T = uintptr_t> T GetEnemyById(Il2CppString* id) {
		return ((T (*)(EnemyInfos*, Il2CppString*))(Il2CppBase() + 0x1FEDDC4))(this, id);
	}

};

}
