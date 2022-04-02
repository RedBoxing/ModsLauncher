#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectFollowCharacter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectFollowCharacter"));
	}

	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& distance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& accelerate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& maxSpeed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& _minSpeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _curSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _targetController() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T InitiateAndSetTarget(uintptr_t controller) {
		return ((T (*)(ObjectFollowCharacter*, uintptr_t))(Il2CppBase() + 0x1D5D248))(this, controller);
	}
	template <typename T = void> T SetTarget(uintptr_t controller) {
		return ((T (*)(ObjectFollowCharacter*, uintptr_t))(Il2CppBase() + 0x1D5D384))(this, controller);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectFollowCharacter*))(Il2CppBase() + 0x1D5D5A4))(this);
	}

};

}
