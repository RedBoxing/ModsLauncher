#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyGetHurt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyGetHurt"));
	}

	template <typename T = uintptr_t> T& enemy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& damage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& source() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& cache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T UseCache(uintptr_t e, int32_t damage, uintptr_t source) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x1FED958))(0, e, damage, source);
	}

};

}
