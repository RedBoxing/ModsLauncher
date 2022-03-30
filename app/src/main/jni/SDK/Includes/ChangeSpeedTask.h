#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChangeSpeedTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangeSpeedTask"));
	}

	template <typename T = float> T& target_speed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& last_speed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = float> T get_Duration() {
		return ((T (*)(ChangeSpeedTask*))(Il2CppBase() + 0x1873430))(this);
	}
	template <typename T = void> T set_Duration(float value) {
		return ((T (*)(ChangeSpeedTask*, float))(Il2CppBase() + 0x1873438))(this, value);
	}
	template <typename T = void> T SetupTask(uintptr_t bullet) {
		return ((T (*)(ChangeSpeedTask*, uintptr_t))(Il2CppBase() + 0x1873448))(this, bullet);
	}
	template <typename T = uintptr_t> T ExecuteTask() {
		return ((T (*)(ChangeSpeedTask*))(Il2CppBase() + 0x1873558))(this);
	}
	template <typename T = void> T iFixBaseProxy_SetupTask(uintptr_t P0) {
		return ((T (*)(ChangeSpeedTask*, uintptr_t))(Il2CppBase() + 0x18736DC))(this, P0);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_ExecuteTask() {
		return ((T (*)(ChangeSpeedTask*))(Il2CppBase() + 0x18736E4))(this);
	}

};

}
