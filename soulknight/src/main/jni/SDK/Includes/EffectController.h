#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EffectController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectController"));
	}

	template <typename T = uintptr_t> T& bubbleEffectPrefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& bubbleEffectPoolSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _bubbleEffectBuffer() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _effectParentTransform() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init(uintptr_t effectParentTransform) {
		return ((T (*)(EffectController*, uintptr_t))(Il2CppBase() + 0x18B67DC))(this, effectParentTransform);
	}
	template <typename T = void> T InitBubbleEffectBuffer() {
		return ((T (*)(EffectController*))(Il2CppBase() + 0x18B685C))(this);
	}

};

}
