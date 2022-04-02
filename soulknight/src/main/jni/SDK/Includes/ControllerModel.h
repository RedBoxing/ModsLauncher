#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ControllerModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ControllerModel"));
	}

	template <typename T = uintptr_t> T& Enemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& PetController() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MountController() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> T get_Enemy() {
		return ((T (*)(ControllerModel*))(Il2CppBase() + 0x42C1598))(this);
	}
	template <typename T = uintptr_t> T get_PetController() {
		return ((T (*)(ControllerModel*))(Il2CppBase() + 0x42C15A0))(this);
	}
	template <typename T = uintptr_t> T get_MountController() {
		return ((T (*)(ControllerModel*))(Il2CppBase() + 0x42C15A8))(this);
	}
	template <typename T = bool> T CanNotFall() {
		return ((T (*)(ControllerModel*))(Il2CppBase() + 0x42C00F0))(this);
	}
	template <typename T = void> T BeforeFall() {
		return ((T (*)(ControllerModel*))(Il2CppBase() + 0x42C0A04))(this);
	}
	template <typename T = void> T StartFall(int32_t fallDamage) {
		return ((T (*)(ControllerModel*, int32_t))(Il2CppBase() + 0x42C0ECC))(this, fallDamage);
	}
	template <typename T = void> T EndFall() {
		return ((T (*)(ControllerModel*))(Il2CppBase() + 0x42C13CC))(this);
	}

};

}
