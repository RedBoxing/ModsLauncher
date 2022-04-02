#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGTaskBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGTaskBullet"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& task_list() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& end_task_num() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T AddTask(uintptr_t task) {
		return ((T (*)(RGTaskBullet*, uintptr_t))(Il2CppBase() + 0x43E3010))(this, task);
	}
	template <typename T = void> T SetupTasks() {
		return ((T (*)(RGTaskBullet*))(Il2CppBase() + 0x43E30F4))(this);
	}
	template <typename T = void> T UpdateBulletAngle(float target_angle) {
		return ((T (*)(RGTaskBullet*, float))(Il2CppBase() + 0x43E3260))(this, target_angle);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(RGTaskBullet*))(Il2CppBase() + 0x43E3454))(this);
	}
	template <typename T = bool> T RunTask() {
		return ((T (*)(RGTaskBullet*))(Il2CppBase() + 0x43E34C8))(this);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(RGTaskBullet*))(Il2CppBase() + 0x43E368C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Destroy() {
		return ((T (*)(RGTaskBullet*))(Il2CppBase() + 0x43E3734))(this);
	}

};

}
