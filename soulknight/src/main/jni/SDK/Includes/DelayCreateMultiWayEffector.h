#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DelayCreateMultiWayEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayCreateMultiWayEffector"));
	}

	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& releaseTimes() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& createdBullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& destroyOnCreate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& parentBullet() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timeCounter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _currentReleaseTimes() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Update() {
		return ((T (*)(DelayCreateMultiWayEffector*))(Il2CppBase() + 0x42E7C44))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(DelayCreateMultiWayEffector*))(Il2CppBase() + 0x42E7FF4))(this);
	}

};

}
