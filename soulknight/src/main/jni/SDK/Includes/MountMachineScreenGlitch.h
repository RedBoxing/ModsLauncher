#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MountMachineScreenGlitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountMachineScreenGlitch"));
	}

	template <typename T = uintptr_t> T& renderer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& saturatorModel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& z() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& w() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& instantiateMaterial() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _saturatorId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _jumpDriftId() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(MountMachineScreenGlitch*))(Il2CppBase() + 0x41F9F74))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(MountMachineScreenGlitch*))(Il2CppBase() + 0x41FA064))(this);
	}

};

}
