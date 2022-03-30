#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ColliderModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ColliderModel"));
	}

	template <typename T = uintptr_t> T& baseController() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& characterController() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& characterFlushCallback() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& skillFlushCallback() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& prevControllerParent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& sinkParent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& maskTransform() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& controllerRenderers() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& prevMaskInteractions() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& speedDownObject() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& sinkAmount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& extraSinkAmount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& attachCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& bubbleEffectParticle() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& influenceAmount() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T ResetRendererMask() {
		return ((T (*)(ColliderModel*))(Il2CppBase() + 0x18BB70C))(this);
	}
	template <typename T = void> T CharacterSinkProcess() {
		return ((T (*)(ColliderModel*))(Il2CppBase() + 0x18BBD10))(this);
	}
	template <typename T = void> T CharacterRestoreProcess() {
		return ((T (*)(ColliderModel*))(Il2CppBase() + 0x18BC704))(this);
	}

};

}
