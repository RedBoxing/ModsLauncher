#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PickableDistribution
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PickableDistribution"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& seedDistribute() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& materialDistribute() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& blueprintDistribute() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tokenMachineDistribute() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& brTicket() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& _datas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T get_datas() {
		return ((T (*)(void *))(Il2CppBase() + 0x4392D60))(0);
	}
	template <typename T = uintptr_t> static T GetBossRushTicket() {
		return ((T (*)(void *))(Il2CppBase() + 0x4392F94))(0);
	}
	template <typename T = uintptr_t> static T GetRandomObject(uintptr_t type, uintptr_t rg_random, int32_t level) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4393024))(0, type, rg_random, level);
	}
	template <typename T = uintptr_t> static T GetRandomObject_1(uintptr_t rg_random, int32_t weight0, int32_t weight1, int32_t weight2) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4393834))(0, rg_random, weight0, weight1, weight2);
	}
	template <typename T = uintptr_t> static T GetRandomObject_2(uintptr_t rg_random, int32_t level) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x439391C))(0, rg_random, level);
	}
	template <typename T = uintptr_t> static T GetRandomSeed(uintptr_t rg_random, int32_t level) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4393104))(0, rg_random, level);
	}
	template <typename T = uintptr_t> static T GetRandomMaterial(uintptr_t rg_random, int32_t level) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4393778))(0, rg_random, level);
	}
	template <typename T = uintptr_t> static T GetRandomBlueprint(uintptr_t rg_random, int32_t level, bool isNullable) {
		return ((T (*)(void *, uintptr_t, int32_t, bool))(Il2CppBase() + 0x43931C0))(0, rg_random, level, isNullable);
	}
	template <typename T = uintptr_t> static T GetRandomComodity(Il2CppList<uintptr_t>* comodities, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4393A04))(0, comodities, rg_random);
	}

};

}
