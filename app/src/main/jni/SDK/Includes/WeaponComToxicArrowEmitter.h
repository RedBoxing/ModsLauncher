#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComToxicArrowEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComToxicArrowEmitter"));
	}

	template <typename T = int32_t> T& emitCount() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cachedHit() {
		return *(T*)((uintptr_t)this + 0x150);
	}

	template <typename T = void> T OnEmit(int32_t atkSequence) {
		return ((T (*)(WeaponComToxicArrowEmitter*, int32_t))(Il2CppBase() + 0x4493598))(this, atkSequence);
	}
	template <typename T = void> T _EmitBullets() {
		return ((T (*)(WeaponComToxicArrowEmitter*))(Il2CppBase() + 0x449360C))(this);
	}
	template <typename T = void> T _EmitBulletsb__4_0() {
		return ((T (*)(WeaponComToxicArrowEmitter*))(Il2CppBase() + 0x44937A4))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnEmit(int32_t P0) {
		return ((T (*)(WeaponComToxicArrowEmitter*, int32_t))(Il2CppBase() + 0x4493A6C))(this, P0);
	}

};

}
