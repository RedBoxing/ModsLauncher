#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateTimeSinceStartRoom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateTimeSinceStartRoom"));
	}

	template <typename T = uintptr_t> T& _room() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _startCountingTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UpdateTimeSinceStartRoom*))(Il2CppBase() + 0x440120C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UpdateTimeSinceStartRoom*))(Il2CppBase() + 0x44012A4))(this);
	}

};

}
