#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TaskInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TaskInfo"));
	}

	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemyTasks1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemyTasks2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemyTasks3() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& enemyTasksAddition() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x43B8FEC))(0);
	}
	template <typename T = uintptr_t> T GetSprite(Il2CppString* enemyId) {
		return ((T (*)(TaskInfo*, Il2CppString*))(Il2CppBase() + 0x43B9728))(this, enemyId);
	}
	template <typename T = uintptr_t> T GetInfo(Il2CppString* enemyId) {
		return ((T (*)(TaskInfo*, Il2CppString*))(Il2CppBase() + 0x43B97AC))(this, enemyId);
	}
	template <typename T = Il2CppString*> T GetDesc(uintptr_t factor) {
		return ((T (*)(TaskInfo*, uintptr_t))(Il2CppBase() + 0x43B9CB0))(this, factor);
	}

};

}
