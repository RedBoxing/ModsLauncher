#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomUtil"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& statueBuffList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& strRnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T GetRandomObject(Il2CppDictionary<uintptr_t, int32_t>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomObject_1(Il2CppList<uintptr_t>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomObject_2(Il2CppArray<uintptr_t>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomWeightObject(void* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomWeightObject_1(void* distribution, void* weight, uintptr_t rg_random) {
		return ((T (*)(void *, void*, void*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, weight, rg_random);
	}
	template <typename T = int32_t> static T GetRandomWeightObjectIndex(void* distribution, void* weight, uintptr_t rg_random) {
		return ((T (*)(void *, void*, void*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, weight, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomObject_3(void* distribution) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x0))(0, distribution);
	}
	template <typename T = uintptr_t> static T GetRandomWeightObject_2(void* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = int32_t> static T ValidValue(int32_t index, int32_t count) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x44DCC70))(0, index, count);
	}
	template <typename T = int32_t> static T GetRandomWeightIndex(void* weights, uintptr_t rg_random) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x44DCD3C))(0, weights, rg_random);
	}
	template <typename T = uintptr_t> static T GetRandomObject_4(Il2CppDictionary<uintptr_t, float>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, float>*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetRandomObjects(Il2CppDictionary<uintptr_t, float>* distribution, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, float>*, uintptr_t))(Il2CppBase() + 0x0))(0, distribution, rg_random);
	}
	template <typename T = int32_t> static T GetRandomSeedCurTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DD0D4))(0);
	}
	template <typename T = uintptr_t> static T GetNewRandomWithCurTimeSeed() {
		return ((T (*)(void *))(Il2CppBase() + 0x44DD19C))(0);
	}
	template <typename T = int32_t> static T GetRandomStatue(uintptr_t random) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44DD278))(0, random);
	}
	template <typename T = void> static T Shuffle(Il2CppList<uintptr_t>* list, uintptr_t rg_random) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x0))(0, list, rg_random);
	}
	template <typename T = int32_t> static T Range(int32_t min, int32_t max, uintptr_t rg_random) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x44DD2F8))(0, min, max, rg_random);
	}
	template <typename T = Il2CppString*> static T RandomString(int32_t length) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x44DD3A0))(0, length);
	}

};

}
