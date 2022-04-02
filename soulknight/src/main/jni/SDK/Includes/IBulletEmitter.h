#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IBulletEmitter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IBulletEmitter"));
	}


	template <typename T = void> T EmitBullet(uintptr_t bulletEmitInfo) {
		return ((T (*)(IBulletEmitter*, uintptr_t))(Il2CppBase() + 0x0))(this, bulletEmitInfo);
	}

};

}
