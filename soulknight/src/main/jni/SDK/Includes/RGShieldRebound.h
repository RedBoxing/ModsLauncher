#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGShieldRebound
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGShieldRebound"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& fadeSprites() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& fadeShader() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& rotateTransforms() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& maxTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& _state() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _initMaterials() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _fadeMaterials() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _targetSaturatorArray() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = float> T& _startTime() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& _currentAngleSpeed() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> static T& ShaderSaturatorId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ShaderSmoothId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& ShaderFadeRadiusId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGShieldRebound*))(Il2CppBase() + 0x43D4EB4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RGShieldRebound*))(Il2CppBase() + 0x43D5434))(this);
	}
	template <typename T = void> T IdleUpdate() {
		return ((T (*)(RGShieldRebound*))(Il2CppBase() + 0x43D5884))(this);
	}
	template <typename T = void> T FadeOutUpdate() {
		return ((T (*)(RGShieldRebound*))(Il2CppBase() + 0x43D59DC))(this);
	}
	template <typename T = void> T FadeInUpdate() {
		return ((T (*)(RGShieldRebound*))(Il2CppBase() + 0x43D5564))(this);
	}

};

}
