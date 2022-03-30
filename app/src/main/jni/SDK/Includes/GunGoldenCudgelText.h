#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GunGoldenCudgelText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GunGoldenCudgelText"));
	}

	template <typename T = Il2CppString*> T& defaultDamage() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& defaultConsume() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& defaultCritical() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& defaultDeviation() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppString*> T get_damage() {
		return ((T (*)(GunGoldenCudgelText*))(Il2CppBase() + 0x249B730))(this);
	}
	template <typename T = Il2CppString*> T get_consume() {
		return ((T (*)(GunGoldenCudgelText*))(Il2CppBase() + 0x249B8C0))(this);
	}
	template <typename T = Il2CppString*> T get_critical() {
		return ((T (*)(GunGoldenCudgelText*))(Il2CppBase() + 0x249B9D4))(this);
	}
	template <typename T = Il2CppString*> T get_deviation() {
		return ((T (*)(GunGoldenCudgelText*))(Il2CppBase() + 0x249BB64))(this);
	}

};

}
