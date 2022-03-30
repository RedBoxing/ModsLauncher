#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponSpecialCmdMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSpecialCmdMessage"));
	}

	template <typename T = int32_t> T& transformId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& netId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& btnType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isDown() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Serialize(uintptr_t writer) {
		return ((T (*)(WeaponSpecialCmdMessage*, uintptr_t))(Il2CppBase() + 0x45FDD14))(this, writer);
	}
	template <typename T = void> T Deserialize(uintptr_t reader) {
		return ((T (*)(WeaponSpecialCmdMessage*, uintptr_t))(Il2CppBase() + 0x45FDE18))(this, reader);
	}
	template <typename T = void> T iFixBaseProxy_Serialize(uintptr_t P0) {
		return ((T (*)(WeaponSpecialCmdMessage*, uintptr_t))(Il2CppBase() + 0x45FDF20))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_Deserialize(uintptr_t P0) {
		return ((T (*)(WeaponSpecialCmdMessage*, uintptr_t))(Il2CppBase() + 0x45FDF28))(this, P0);
	}

};

}
