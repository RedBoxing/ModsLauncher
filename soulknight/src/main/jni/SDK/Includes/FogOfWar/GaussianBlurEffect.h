#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FogOfWar {

class GaussianBlurEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FogOfWar", "GaussianBlurEffect"));
	}

	template <typename T = float> T& blurSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& ShaderBlurSizeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T OnRenderImage(uintptr_t sourceTexture, uintptr_t destTexture) {
		return ((T (*)(GaussianBlurEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x451220C))(this, sourceTexture, destTexture);
	}

};

}
