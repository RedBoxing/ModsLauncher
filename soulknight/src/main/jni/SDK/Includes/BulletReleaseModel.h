#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletReleaseModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletReleaseModel"));
	}

	template <typename T = Il2CppVector3> T& releasePosition() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& followTarget() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& releaseTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
