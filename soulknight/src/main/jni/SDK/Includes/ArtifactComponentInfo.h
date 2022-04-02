#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactComponentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactComponentInfo"));
	}

	template <typename T = int32_t> T& rarity() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& sortingOrder() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& displayOrder() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
