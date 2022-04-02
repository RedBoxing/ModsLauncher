#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletTentacle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletTentacle"));
	}

	template <typename T = uintptr_t> T& childBullet() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& emitDelay() {
		return *(T*)((uintptr_t)this + 0x110);
	}


};

}
