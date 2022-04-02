#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletInfoUFO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletInfoUFO"));
	}

	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& atk() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& bullet_speed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& critical() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& can_through() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
