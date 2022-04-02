#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMoverFollowAttachment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMoverFollowAttachment"));
	}

	template <typename T = bool> T& randomTarget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& playerBullet() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = float> T& angleSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& updateInterval() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& followDelay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& limitTimes() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnCreateBullet(uintptr_t bulletGo) {
		return ((T (*)(BulletMoverFollowAttachment*, uintptr_t))(Il2CppBase() + 0x238797C))(this, bulletGo);
	}

};

}
