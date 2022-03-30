#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SwitchWeaponCmdMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SwitchWeaponCmdMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& idx() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(SwitchWeaponCmdMessage*, uintptr_t))(Il2CppBase() + 0x18C0B54))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(SwitchWeaponCmdMessage*, uintptr_t))(Il2CppBase() + 0x18C0C48))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(SwitchWeaponCmdMessage*, uintptr_t))(Il2CppBase() + 0x18C0D3C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(SwitchWeaponCmdMessage*, uintptr_t))(Il2CppBase() + 0x18C0D44))(this, P0);
	}

};

}
