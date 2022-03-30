#pragma once
#include "Il2Cpp/Il2Cpp.h"

class LoopPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoopPlayer"));
	}

	template <typename T = uintptr_t> T& _audioSource() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _manager() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Init(uintptr_t source, uintptr_t manager) {
		return ((T (*)(LoopPlayer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B766F4))(this, source, manager);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LoopPlayer*))(Il2CppBase() + 0x1B77504))(this);
	}
	template <typename T = void> T Play() {
		return ((T (*)(LoopPlayer*))(Il2CppBase() + 0x1B775A8))(this);
	}
	template <typename T = void> T Pause() {
		return ((T (*)(LoopPlayer*))(Il2CppBase() + 0x1B7761C))(this);
	}
	template <typename T = void> T __StopAndDestroy() {
		return ((T (*)(LoopPlayer*))(Il2CppBase() + 0x1B76870))(this);
	}

};

}
