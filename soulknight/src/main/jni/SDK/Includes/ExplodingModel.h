#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExplodingModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExplodingModel"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Triggers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& HasExplode() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& thunderObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_Triggers() {
		return ((T (*)(ExplodingModel*))(Il2CppBase() + 0x425FEFC))(this);
	}
	template <typename T = float> T get_StartTime() {
		return ((T (*)(ExplodingModel*))(Il2CppBase() + 0x425FF0C))(this);
	}
	template <typename T = bool> T get_HasExplode() {
		return ((T (*)(ExplodingModel*))(Il2CppBase() + 0x425FF14))(this);
	}
	template <typename T = void> T set_HasExplode(bool value) {
		return ((T (*)(ExplodingModel*, bool))(Il2CppBase() + 0x4260B08))(this, value);
	}
	template <typename T = uintptr_t> T get_thunderObject() {
		return ((T (*)(ExplodingModel*))(Il2CppBase() + 0x425FF04))(this);
	}
	template <typename T = void> T set_thunderObject(uintptr_t value) {
		return ((T (*)(ExplodingModel*, uintptr_t))(Il2CppBase() + 0x4260B14))(this, value);
	}

};

}
