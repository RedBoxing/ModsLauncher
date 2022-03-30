#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TSKnight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TSKnight"));
	}

	template <typename T = uintptr_t> T& hand() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& hand2() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C7D7C))(this);
	}
	template <typename T = void> T RoleSkill() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C7EB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C86CC))(this);
	}
	template <typename T = void> T RoleSkillEnd() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C87E4))(this);
	}
	template <typename T = void> T OnControllerShoot() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C8B44))(this);
	}
	template <typename T = void> T SecondHandShoot() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C8BF0))(this);
	}
	template <typename T = void> T ChaosBulletCreated(uintptr_t bullet) {
		return ((T (*)(TSKnight*, uintptr_t))(Il2CppBase() + 0x18C8D44))(this, bullet);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C90AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkill() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C90B4))(this);
	}
	template <typename T = void> T iFixBaseProxy_RoleSkillEnd() {
		return ((T (*)(TSKnight*))(Il2CppBase() + 0x18C90BC))(this);
	}

};

}
