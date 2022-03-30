#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactBowBulletInfoInspector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactBowBulletInfoInspector"));
	}

	template <typename T = float> T& chargeAddSpeed() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& chargeAddCrit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& chargeAddDamage() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& chargeAddRepel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& chargeAddThroughCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}


};

}
