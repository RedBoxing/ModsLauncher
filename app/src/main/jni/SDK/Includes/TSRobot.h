#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSRobot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSRobot"));
	}

	template <typename T = uintptr_t> T& antenna() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& funnelRoot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& funnels() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CE4BC))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CE5B0))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CEA4C))(this);
	}
	template <typename T = void> T ReleaseFunnels() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CE61C))(this);
	}
	template <typename T = uintptr_t> T CreatingFunnel() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CEC2C))(this);
	}
	template <typename T = void> T RecycleFunnels() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CEAB8))(this);
	}
	template <typename T = uintptr_t> T FunnelRatating() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CECE0))(this);
	}
	template <typename T = void> T OnDead() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CEDEC))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CEEC8))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CEED0))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CEED8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDead() {
		return ((T (*)(TSRobot*))(Il2CppBase() + 0x18CEEE0))(this);
	}

};

}
