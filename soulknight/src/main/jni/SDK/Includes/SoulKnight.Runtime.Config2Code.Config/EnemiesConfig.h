#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace SoulKnight.Runtime.Config2Code.Config {

class EnemiesConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "SoulKnight.Runtime.Config2Code.Config", "EnemiesConfig"));
	}

	template <typename T = void*> static T& CsvLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T Load() {
		return ((T (*)(void *))(Il2CppBase() + 0x4294DFC))(0);
	}
	template <typename T = void*> static T get_Data() {
		return ((T (*)(void *))(Il2CppBase() + 0x4294EC8))(0);
	}

};

}
