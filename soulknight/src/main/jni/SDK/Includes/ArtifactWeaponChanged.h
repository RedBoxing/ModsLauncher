#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactWeaponChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactWeaponChanged"));
	}

	template <typename T = bool> T& drop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& controller() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& newPart() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
