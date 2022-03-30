#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FogOfWar {

class FogCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FogOfWar", "FogCamera"));
	}

	template <typename T = uintptr_t> T& followCamera() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _fogCamera() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _fogTexture() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& ShaderLosMaskTextureId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Start() {
		return ((T (*)(FogCamera*))(Il2CppBase() + 0x4511D04))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(FogCamera*))(Il2CppBase() + 0x4511E44))(this);
	}

};

}
