#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FogOfWar {

class BoxBlur
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FogOfWar", "BoxBlur"));
	}

	template <typename T = uintptr_t> T& _blurBoxShader() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _blurBoxMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& blurSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(BoxBlur*))(Il2CppBase() + 0x4511358))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BoxBlur*))(Il2CppBase() + 0x451146C))(this);
	}
	template <typename T = void> T FourTapCone(uintptr_t source, uintptr_t dest, int32_t iteration) {
		return ((T (*)(BoxBlur*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x451157C))(this, source, dest, iteration);
	}
	template <typename T = void> T DownSample4x(uintptr_t source, uintptr_t dest) {
		return ((T (*)(BoxBlur*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45117B4))(this, source, dest);
	}
	template <typename T = void> T OnRenderImage(uintptr_t sourceTexture, uintptr_t destTexture) {
		return ((T (*)(BoxBlur*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45119C0))(this, sourceTexture, destTexture);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BoxBlur*))(Il2CppBase() + 0x4511C00))(this);
	}

};

}
