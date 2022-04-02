#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGAim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGAim"));
	}

	template <typename T = Il2CppVector2> T& direction() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isEnemy() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& startOffset() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& enemyMask() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& normalMask() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGAim*))(Il2CppBase() + 0x1BA6AF8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGAim*))(Il2CppBase() + 0x1BA6C00))(this);
	}

};

}
