#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.WeaponDop {

class WeaponDropTest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.WeaponDop", "WeaponDropTest"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bundleNames() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& singletonGroup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& sellMan() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& chestLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& waitTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& randomMaxTimes() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& expectWeaponName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& sellManGo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& canRefresh() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& isRolling() {
		return *(T*)((uintptr_t)this + 0x51);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(WeaponDropTest*))(Il2CppBase() + 0x43C285C))(this);
	}
	template <typename T = uintptr_t> T Load() {
		return ((T (*)(WeaponDropTest*))(Il2CppBase() + 0x43C28CC))(this);
	}
	template <typename T = void> T UpdateWeapon() {
		return ((T (*)(WeaponDropTest*))(Il2CppBase() + 0x43C29AC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T InstantiateSellMan() {
		return ((T (*)(WeaponDropTest*))(Il2CppBase() + 0x43C2A28))(this);
	}
	template <typename T = void> T StartRandom() {
		return ((T (*)(WeaponDropTest*))(Il2CppBase() + 0x43C2DEC))(this);
	}
	template <typename T = uintptr_t> T Rolling() {
		return ((T (*)(WeaponDropTest*))(Il2CppBase() + 0x43C2E7C))(this);
	}

};

}
