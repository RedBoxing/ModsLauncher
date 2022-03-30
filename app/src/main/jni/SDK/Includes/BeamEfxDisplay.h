#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BeamEfxDisplay
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeamEfxDisplay"));
	}

	template <typename T = uintptr_t> T& end1EfxPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& end2EfxPrefab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& lineEfxPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& fadeDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& displayOnEnable() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& startDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& widthBias() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& widthBiasFactor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& _widthBias() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _widthBiasDeltaSign() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& _passedTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& onClean() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(BeamEfxDisplay*))(Il2CppBase() + 0x1B21B10))(this);
	}
	template <typename T = void> T Display() {
		return ((T (*)(BeamEfxDisplay*))(Il2CppBase() + 0x1B21B84))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BeamEfxDisplay*))(Il2CppBase() + 0x1B21DEC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BeamEfxDisplay*))(Il2CppBase() + 0x1B21E60))(this);
	}

};

}
