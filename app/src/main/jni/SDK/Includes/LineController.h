#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LineController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LineController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& textures() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& fps() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& line() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& animation_step() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& fps_counter() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LineController*))(Il2CppBase() + 0x4263AAC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LineController*))(Il2CppBase() + 0x4263B44))(this);
	}

};

}
