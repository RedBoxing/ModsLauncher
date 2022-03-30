#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SkillHandHammerModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkillHandHammerModel"));
	}

	template <typename T = uintptr_t> T& audio() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& shockWaveInfo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& dropCrystalInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& dropCrystalCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& dropCrystalInterval() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& handFirePos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& handFirePos2() {
		return *(T*)((uintptr_t)this + 0x50);
	}


};

}
