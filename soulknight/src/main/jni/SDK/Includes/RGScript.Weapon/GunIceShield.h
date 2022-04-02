#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class GunIceShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "GunIceShield"));
	}

	template <typename T = float> T& cd() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& _isInCd() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}

	template <typename T = void> T CdEnd() {
		return ((T (*)(GunIceShield*))(Il2CppBase() + 0x43D0674))(this);
	}
	template <typename T = void> T Attack() {
		return ((T (*)(GunIceShield*))(Il2CppBase() + 0x43D06D4))(this);
	}

};

}
