#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SelfSimilarEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SelfSimilarEffector"));
	}

	template <typename T = float> T& delayTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& autoAngle() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& triggerTime() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& maxRecreateCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _recreateCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x90);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(SelfSimilarEffector*))(Il2CppBase() + 0x1821DB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SelfSimilarEffector*))(Il2CppBase() + 0x1821E24))(this);
	}
	template <typename T = void> T CreateSubObject() {
		return ((T (*)(SelfSimilarEffector*))(Il2CppBase() + 0x1821EB0))(this);
	}

};

}
