#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffDOT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffDOT"));
	}

	template <typename T = int32_t> T& enemyDamage() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& enemyInterval() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& playerDamage() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& playerInterval() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& source_objcet() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _eController() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = int32_t> T get_damage() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A5754))(this);
	}
	template <typename T = int32_t> T get_deltaDamage() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A57E0))(this);
	}
	template <typename T = float> T get_interval() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A597C))(this);
	}
	template <typename T = float> T get_duration() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A59EC))(this);
	}
	template <typename T = uintptr_t> T get_ctrl() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A5B44))(this);
	}
	template <typename T = uintptr_t> T get_enemyController() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A5A84))(this);
	}
	template <typename T = uintptr_t> T get_attribute() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A5C04))(this);
	}
	template <typename T = uintptr_t> T get_controller() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A58B4))(this);
	}
	template <typename T = uintptr_t> T get_troopMercenary() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A5CC4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A5D8C))(this);
	}
	template <typename T = void> T GetHurt() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A5EEC))(this);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A61B0))(this);
	}
	template <typename T = void> T SetSourceObject(uintptr_t value) {
		return ((T (*)(BuffDOT*, uintptr_t))(Il2CppBase() + 0x20A6210))(this, value);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A6150))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A6284))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffDOT*))(Il2CppBase() + 0x20A6418))(this);
	}

};

}
