#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DrYangAttackListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DrYangAttackListener"));
	}

	template <typename T = uintptr_t> T& lightningSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& angle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& bulletIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& attackStateName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& bulletCount() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& stayDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& countEnhanceBuff() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& extraBulletCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& enterTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& weapon() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = bool> T get_canTrigger() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE238))(this);
	}
	template <typename T = Il2CppString*> T get_ExitStateName() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE2C8))(this);
	}
	template <typename T = Il2CppString*> T get_EnterStateName() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE328))(this);
	}
	template <typename T = void> T OnStateExit() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE388))(this);
	}
	template <typename T = void> T OnStateEnter() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE688))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE6F0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE7A4))(this);
	}
	template <typename T = int32_t> T get_ActualBulletCount() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE828))(this);
	}
	template <typename T = void> T TriggerBullet() {
		return ((T (*)(DrYangAttackListener*))(Il2CppBase() + 0x42EE400))(this);
	}

};

}
