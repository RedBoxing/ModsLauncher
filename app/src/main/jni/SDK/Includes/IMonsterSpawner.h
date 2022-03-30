#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IMonsterSpawner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMonsterSpawner"));
	}


	template <typename T = void*> T get_OnSpawnMonster() {
		return ((T (*)(IMonsterSpawner*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_OnSpawnMonster(void* value) {
		return ((T (*)(IMonsterSpawner*, void*))(Il2CppBase() + 0x0))(this, value);
	}

};

}
