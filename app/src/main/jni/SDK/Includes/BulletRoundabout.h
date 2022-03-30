#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletRoundabout
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletRoundabout"));
	}

	template <typename T = Il2CppVector3> T& lastTargetPos() {
		return *(T*)((uintptr_t)this + 0x138);
	}

	template <typename T = void> T OnTaken() {
		return ((T (*)(BulletRoundabout*))(Il2CppBase() + 0x238E690))(this);
	}
	template <typename T = uintptr_t> T DetectBack() {
		return ((T (*)(BulletRoundabout*))(Il2CppBase() + 0x238E7F8))(this);
	}
	template <typename T = void> T CreateBulletMover() {
		return ((T (*)(BulletRoundabout*))(Il2CppBase() + 0x238E8D8))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnTaken() {
		return ((T (*)(BulletRoundabout*))(Il2CppBase() + 0x238EBA8))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateBulletMover() {
		return ((T (*)(BulletRoundabout*))(Il2CppBase() + 0x238EBB0))(this);
	}

};

}
