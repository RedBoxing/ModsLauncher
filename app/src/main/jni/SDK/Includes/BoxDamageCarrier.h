#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BoxDamageCarrier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoxDamageCarrier"));
	}

	template <typename T = Il2CppVector3> T& size() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& sourceIsOrigin() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cachedHitResult() {
		return *(T*)((uintptr_t)this + 0x118);
	}

	template <typename T = void> T DealDamage() {
		return ((T (*)(BoxDamageCarrier*))(Il2CppBase() + 0x20A2B28))(this);
	}
	template <typename T = void> T iFixBaseProxy_DealDamage() {
		return ((T (*)(BoxDamageCarrier*))(Il2CppBase() + 0x20A2F6C))(this);
	}

};

}
