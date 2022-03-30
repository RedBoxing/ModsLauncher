#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CameraFreezeEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraFreezeEffect"));
	}

	template <typename T = uintptr_t> T& _freezeMaterial() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _camera() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> static T& MaterialName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HurtFreezeDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& IdleSoftValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& HurtSoftValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _counter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _currentSoftValue() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _isHurt() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> static T& ShaderIdSoft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CameraFreezeEffect*))(Il2CppBase() + 0x1869A3C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CameraFreezeEffect*))(Il2CppBase() + 0x1869B20))(this);
	}
	template <typename T = void> T OnGetHurt(uintptr_t e) {
		return ((T (*)(CameraFreezeEffect*, uintptr_t))(Il2CppBase() + 0x1869C04))(this, e);
	}
	template <typename T = void> T OnRenderImage(uintptr_t src, uintptr_t dest) {
		return ((T (*)(CameraFreezeEffect*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1869D7C))(this, src, dest);
	}

};

}
