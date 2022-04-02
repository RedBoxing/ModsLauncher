#pragma once
#include "Il2Cpp/Il2Cpp.h"

class StarEffectTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StarEffectTrigger"));
	}

	template <typename T = uintptr_t> T& fallStar() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& hitRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& hitEnemy() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bullet() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& bulletTrigger() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& hit_list() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(StarEffectTrigger*))(Il2CppBase() + 0x429AB3C))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(StarEffectTrigger*))(Il2CppBase() + 0x429ABEC))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(StarEffectTrigger*))(Il2CppBase() + 0x429AC8C))(this);
	}
	template <typename T = void> T HitEnemy() {
		return ((T (*)(StarEffectTrigger*))(Il2CppBase() + 0x429AD10))(this);
	}
	template <typename T = void> T CreateStar(Il2CppVector3 position) {
		return ((T (*)(StarEffectTrigger*, Il2CppVector3))(Il2CppBase() + 0x429B06C))(this, position);
	}

};

}
