#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactFinalMap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactFinalMap"));
	}

	template <typename T = int32_t> static T& MAP_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& boss_room_distributions() {
		return *(T*)((uintptr_t)this + 0x230);
	}

	template <typename T = void> T CreateMap() {
		return ((T (*)(ArtifactFinalMap*))(Il2CppBase() + 0x1CA33A0))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(ArtifactFinalMap*))(Il2CppBase() + 0x1CA3898))(this);
	}

};

}
