#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FogOfWar {

class FogMaskEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FogOfWar", "FogMaskEffect"));
	}

	template <typename T = uintptr_t> T& maskMaterial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fogColor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ShaderIdFogColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnRenderImage(uintptr_t src, uintptr_t dest) {
		return ((T (*)(FogMaskEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4511FFC))(this, src, dest);
	}

};

}
