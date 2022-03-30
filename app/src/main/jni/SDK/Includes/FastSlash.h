#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FastSlash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FastSlash"));
	}

	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& _currentPosition() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _releaseCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colliderBuffer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _audioCounter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _releaseAudioClip() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(FastSlash*))(Il2CppBase() + 0x1B92644))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FastSlash*))(Il2CppBase() + 0x1B9296C))(this);
	}

};

}
