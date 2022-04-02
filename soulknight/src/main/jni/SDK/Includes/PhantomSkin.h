#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PhantomSkin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhantomSkin"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& phantomWeaponSkin() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& phantomBulletProtos() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
