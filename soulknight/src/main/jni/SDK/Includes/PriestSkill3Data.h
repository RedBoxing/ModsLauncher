#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PriestSkill3Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PriestSkill3Data"));
	}

	template <typename T = bool> T& hasBodyEffect() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& bodyEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasPointer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& pointerPrefab() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bulletLight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& bulletShadow() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& bulletSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& shouldChangeBodySprite() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& setAnim() {
		return *(T*)((uintptr_t)this + 0x45);
	}
	template <typename T = Il2CppString*> T& animBoolId() {
		return *(T*)((uintptr_t)this + 0x48);
	}


};

}
