#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayCreator"));
	}

	template <typename T = uintptr_t> T& spriteRenderer() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = uintptr_t> static T CreateDelayCreator(Il2CppVector3 position, Il2CppQuaternion rotation, uintptr_t parent, float lifeTime) {
		return ((T (*)(void *, Il2CppVector3, Il2CppQuaternion, uintptr_t, float))(Il2CppBase() + 0x42E80F8))(0, position, rotation, parent, lifeTime);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DelayCreator*))(Il2CppBase() + 0x42E82A8))(this);
	}
	template <typename T = void> T StartCreateObject(uintptr_t go, float delay, void* onCreate) {
		return ((T (*)(DelayCreator*, uintptr_t, float, void*))(Il2CppBase() + 0x42E837C))(this, go, delay, onCreate);
	}
	template <typename T = uintptr_t> T DelayStartCreateObject(uintptr_t prefab, float delay, void* onCreate) {
		return ((T (*)(DelayCreator*, uintptr_t, float, void*))(Il2CppBase() + 0x42E8428))(this, prefab, delay, onCreate);
	}

};

}
