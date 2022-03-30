#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class ProCamera2DLetterbox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "ProCamera2DLetterbox"));
	}

	template <typename T = float> T& Amount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _material() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(ProCamera2DLetterbox*))(Il2CppBase() + 0x2C1EB20))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ProCamera2DLetterbox*))(Il2CppBase() + 0x2C1EC44))(this);
	}
	template <typename T = void> T OnRenderImage(uintptr_t sourceTexture, uintptr_t destTexture) {
		return ((T (*)(ProCamera2DLetterbox*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C1ECC4))(this, sourceTexture, destTexture);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ProCamera2DLetterbox*))(Il2CppBase() + 0x2C1EF64))(this);
	}
	template <typename T = void> T TweenTo(float targetAmount, float duration) {
		return ((T (*)(ProCamera2DLetterbox*, float, float))(Il2CppBase() + 0x2C1CC44))(this, targetAmount, duration);
	}
	template <typename T = uintptr_t> T TweenToRoutine(float targetAmount, float duration) {
		return ((T (*)(ProCamera2DLetterbox*, float, float))(Il2CppBase() + 0x2C1F058))(this, targetAmount, duration);
	}

};

}
