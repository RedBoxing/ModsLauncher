#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletTask"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& child_task() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& owner() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& task_param() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& TaskFinished() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_owner() {
		return ((T (*)(BulletTask*))(Il2CppBase() + 0x1DF27BC))(this);
	}
	template <typename T = void> T set_owner(uintptr_t value) {
		return ((T (*)(BulletTask*, uintptr_t))(Il2CppBase() + 0x1DF27C4))(this, value);
	}
	template <typename T = bool> T get_TaskFinished() {
		return ((T (*)(BulletTask*))(Il2CppBase() + 0x1DF27CC))(this);
	}
	template <typename T = void> T set_TaskFinished(bool value) {
		return ((T (*)(BulletTask*, bool))(Il2CppBase() + 0x1DF27D4))(this, value);
	}
	template <typename T = void> T SetupTask(uintptr_t bullet) {
		return ((T (*)(BulletTask*, uintptr_t))(Il2CppBase() + 0x1DF2818))(this, bullet);
	}
	template <typename T = uintptr_t> T ExecuteTask() {
		return ((T (*)(BulletTask*))(Il2CppBase() + 0x1DF288C))(this);
	}

};

}
