#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGGameInfo"));
	}

	template <typename T = int32_t> T& sample_random_seed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& map_random_seed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_SampleRandomSeed() {
		return ((T (*)(RGGameInfo*))(Il2CppBase() + 0x1C449F4))(this);
	}
	template <typename T = void> T set_SampleRandomSeed(int32_t value) {
		return ((T (*)(RGGameInfo*, int32_t))(Il2CppBase() + 0x1C44A54))(this, value);
	}
	template <typename T = int32_t> T get_MapRandomSeed() {
		return ((T (*)(RGGameInfo*))(Il2CppBase() + 0x1C44AC8))(this);
	}
	template <typename T = void> T set_MapRandomSeed(int32_t value) {
		return ((T (*)(RGGameInfo*, int32_t))(Il2CppBase() + 0x1C44B28))(this, value);
	}
	template <typename T = void> T GenerateSampleRandomSeed() {
		return ((T (*)(RGGameInfo*))(Il2CppBase() + 0x1C44B9C))(this);
	}
	template <typename T = void> T GenerateMapRandomSeed() {
		return ((T (*)(RGGameInfo*))(Il2CppBase() + 0x1C44CD4))(this);
	}
	template <typename T = void> T GenerateAllRandomSeed() {
		return ((T (*)(RGGameInfo*))(Il2CppBase() + 0x1C44E0C))(this);
	}

};

}
