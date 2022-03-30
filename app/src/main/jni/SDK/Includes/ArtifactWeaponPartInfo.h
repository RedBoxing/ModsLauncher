#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactWeaponPartInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactWeaponPartInfo"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& partID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& rarity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& elementType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& attachOrder() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& components() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
