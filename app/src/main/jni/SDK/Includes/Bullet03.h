#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Bullet03
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Bullet03"));
	}

	template <typename T = float> T& start_size() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = float> T& max_size() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& max_time() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& isParticleRotationInversed() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& a_time() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& ps_trail() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Bullet03*))(Il2CppBase() + 0x45A54E0))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(Bullet03*))(Il2CppBase() + 0x45A55FC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Bullet03*))(Il2CppBase() + 0x45A5668))(this);
	}
	template <typename T = void> T iFixBaseProxy_Awake() {
		return ((T (*)(Bullet03*))(Il2CppBase() + 0x45A5858))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(Bullet03*))(Il2CppBase() + 0x45A5860))(this);
	}

};

}
