#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayAwakeEnemy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayAwakeEnemy"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(DelayAwakeEnemy*))(Il2CppBase() + 0x42E537C))(this);
	}
	template <typename T = void> T OnAwake() {
		return ((T (*)(DelayAwakeEnemy*))(Il2CppBase() + 0x42E5414))(this);
	}

};

}
