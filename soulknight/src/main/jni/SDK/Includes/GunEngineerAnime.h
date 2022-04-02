#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunEngineerAnime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunEngineerAnime"));
	}

	template <typename T = float> T& checkTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& animeTriggerName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& probability() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GunEngineerAnime*))(Il2CppBase() + 0x2496B24))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GunEngineerAnime*))(Il2CppBase() + 0x2496BE0))(this);
	}

};

}
