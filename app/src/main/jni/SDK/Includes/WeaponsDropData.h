#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponsDropData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponsDropData"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Group() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Weapon() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
