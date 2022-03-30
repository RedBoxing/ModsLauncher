#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.WeaponDop {

class WeaponDropMockMapManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.WeaponDop", "WeaponDropMockMapManager"));
	}

	template <typename T = int32_t> T& mapChestLevel() {
		return *(T*)((uintptr_t)this + 0x228);
	}

	template <typename T = int32_t> T get_chestLevel() {
		return ((T (*)(WeaponDropMockMapManager*))(Il2CppBase() + 0x43C2594))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WeaponDropMockMapManager*))(Il2CppBase() + 0x43C25F4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponDropMockMapManager*))(Il2CppBase() + 0x43C2650))(this);
	}
	template <typename T = int32_t> T iFixBaseProxy_get_chestLevel() {
		return ((T (*)(WeaponDropMockMapManager*))(Il2CppBase() + 0x43C26B4))(this);
	}

};

}
