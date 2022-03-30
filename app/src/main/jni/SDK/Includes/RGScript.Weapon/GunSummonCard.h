#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Weapon {

class GunSummonCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Weapon", "GunSummonCard"));
	}

	template <typename T = uintptr_t> T& gameCardEffect() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& servantPool() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _servantWeights() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = bool> T& _isSummoning() {
		return *(T*)((uintptr_t)this + 0x1C8);
	}
	template <typename T = Il2CppVector3> T& _summonPos() {
		return *(T*)((uintptr_t)this + 0x1CC);
	}
	template <typename T = int32_t> T& _weightSum() {
		return *(T*)((uintptr_t)this + 0x1D8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunSummonCard*))(Il2CppBase() + 0x43D10DC))(this);
	}
	template <typename T = void> T MakeServantWeights() {
		return ((T (*)(GunSummonCard*))(Il2CppBase() + 0x43D11B0))(this);
	}
	template <typename T = uintptr_t> T RandomServant() {
		return ((T (*)(GunSummonCard*))(Il2CppBase() + 0x43D155C))(this);
	}
	template <typename T = void> T OnSummon() {
		return ((T (*)(GunSummonCard*))(Il2CppBase() + 0x43D16D4))(this);
	}
	template <typename T = bool> T IsControllerValid() {
		return ((T (*)(GunSummonCard*))(Il2CppBase() + 0x43D1D48))(this);
	}
	template <typename T = uintptr_t> T Summon() {
		return ((T (*)(GunSummonCard*))(Il2CppBase() + 0x43D1E34))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GunSummonCard*))(Il2CppBase() + 0x43D2144))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_Summon() {
		return ((T (*)(GunSummonCard*))(Il2CppBase() + 0x43D214C))(this);
	}

};

}
