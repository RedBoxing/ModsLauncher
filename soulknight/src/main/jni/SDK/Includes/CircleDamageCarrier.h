#pragma once
#include "Il2Cpp/Il2Cpp.h"

class CircleDamageCarrier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CircleDamageCarrier"));
	}

	template <typename T = bool> T& useSizeCurve() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& sizeCurve() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = float> T& _curveSize() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cachedHitResult() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = void> T DealDamage() {
		return ((T (*)(CircleDamageCarrier*))(Il2CppBase() + 0x1E7646C))(this);
	}
	template <typename T = void> T iFixBaseProxy_DealDamage() {
		return ((T (*)(CircleDamageCarrier*))(Il2CppBase() + 0x1E767C0))(this);
	}

};

}
