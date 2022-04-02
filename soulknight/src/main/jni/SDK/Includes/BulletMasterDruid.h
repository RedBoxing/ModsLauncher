#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BulletMasterDruid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BulletMasterDruid"));
	}

	template <typename T = float> T& atk_interval() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& fx_atk() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& fx_clip() {
		return *(T*)((uintptr_t)this + 0x110);
	}

	template <typename T = void> T StopBullet() {
		return ((T (*)(BulletMasterDruid*))(Il2CppBase() + 0x238538C))(this);
	}
	template <typename T = void> T AtkFx() {
		return ((T (*)(BulletMasterDruid*))(Il2CppBase() + 0x2385430))(this);
	}
	template <typename T = void> T iFixBaseProxy_StopBullet() {
		return ((T (*)(BulletMasterDruid*))(Il2CppBase() + 0x2385C00))(this);
	}

};

}
