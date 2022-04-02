#pragma once
#include "Il2Cpp/Il2Cpp.h"

class JumpSlash
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "JumpSlash"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _colliderBuffer() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _hasReleased() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _bossController() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T ReleaseSkill() {
		return ((T (*)(JumpSlash*))(Il2CppBase() + 0x1B941CC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(JumpSlash*))(Il2CppBase() + 0x1B94780))(this);
	}

};

}
