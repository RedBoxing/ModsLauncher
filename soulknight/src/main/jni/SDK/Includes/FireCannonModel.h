#pragma once
#include "Il2Cpp/Il2Cpp.h"

class FireCannonModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FireCannonModel"));
	}

	template <typename T = int32_t> T& minAttackCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& cannonBall() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& fireEfx() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& fireClip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& dropDuration() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& hitExplode() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& fireAreaPrefab() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& alertEfx() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& alertSizeUnit() {
		return *(T*)((uintptr_t)this + 0x68);
	}


};

}
