#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet06
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet06"));
	}

	template <typename T = float> T& fly_time() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& offset_y() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& frequency() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector2> T& last_offset() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T FixedUpdate() {
		return ((T (*)(Bullet06*))(Il2CppBase() + 0x45A625C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(Bullet06*))(Il2CppBase() + 0x45A653C))(this);
	}
	template <typename T = uintptr_t> T DirectionUpdating() {
		return ((T (*)(Bullet06*))(Il2CppBase() + 0x45A65FC))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(Bullet06*))(Il2CppBase() + 0x45A6754))(this);
	}
	template <typename T = uintptr_t> T iFixBaseProxy_DirectionUpdating() {
		return ((T (*)(Bullet06*))(Il2CppBase() + 0x45A675C))(this);
	}

};

}
