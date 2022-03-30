#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RandomObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomObject"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& distributions() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& onRandomObjectInstantiate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& total() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T add_onRandomObjectInstantiate(void* value) {
		return ((T (*)(RandomObject*, void*))(Il2CppBase() + 0x44DB334))(this, value);
	}
	template <typename T = void> T remove_onRandomObjectInstantiate(void* value) {
		return ((T (*)(RandomObject*, void*))(Il2CppBase() + 0x44DB420))(this, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(RandomObject*))(Il2CppBase() + 0x44DB50C))(this);
	}
	template <typename T = void> T OnSetRGRandomSeed(int32_t seed) {
		return ((T (*)(RandomObject*, int32_t))(Il2CppBase() + 0x44DB568))(this, seed);
	}
	template <typename T = void> T OnObjectInstantiate(uintptr_t obj) {
		return ((T (*)(RandomObject*, uintptr_t))(Il2CppBase() + 0x44DB840))(this, obj);
	}
	template <typename T = void> T iFixBaseProxy_OnSetRGRandomSeed(int32_t P0) {
		return ((T (*)(RandomObject*, int32_t))(Il2CppBase() + 0x44DB904))(this, P0);
	}

};

}
