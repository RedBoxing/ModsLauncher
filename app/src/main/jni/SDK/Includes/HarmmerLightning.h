#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HarmmerLightning
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HarmmerLightning"));
	}

	template <typename T = float> T& triggerInterval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& triggerDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& triggerCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extraCountBuff() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& extraCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Start() {
		return ((T (*)(HarmmerLightning*))(Il2CppBase() + 0x1A3151C))(this);
	}
	template <typename T = void> T AfterBulletCreate() {
		return ((T (*)(HarmmerLightning*))(Il2CppBase() + 0x1A31608))(this);
	}

};

}
