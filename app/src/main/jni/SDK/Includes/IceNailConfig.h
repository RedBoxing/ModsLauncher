#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IceNailConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IceNailConfig"));
	}

	template <typename T = int32_t> T& roomSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& aisleWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& roomPositionOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& nailBullet() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& smallExplodeNailCountRate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& bigExplodeNailCountRate() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& bigExplodeTriggerRate() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& smallExplodeTriggerRate() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& explodeScaleRange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& explodeDurationRange() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& nailCamp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& explodeColdDown() {
		return *(T*)((uintptr_t)this + 0x54);
	}


};

}
