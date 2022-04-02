#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PrefabManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabManager"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& _prefabPaths() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& prefabArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& coinArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T GetPrefab(uintptr_t name) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x43A17CC))(0, name);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x43A1A84))(0);
	}
	template <typename T = uintptr_t> static T GetCoin(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x43A1B44))(0, index);
	}

};

}
