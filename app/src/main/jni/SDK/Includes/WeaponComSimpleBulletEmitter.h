#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponComSimpleBulletEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponComSimpleBulletEmitter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x140);
	}

	template <typename T = uintptr_t> T _GetBulletConfig(int32_t atkSequence) {
		return ((T (*)(WeaponComSimpleBulletEmitter*, int32_t))(Il2CppBase() + 0x448DA88))(this, atkSequence);
	}

};

}
