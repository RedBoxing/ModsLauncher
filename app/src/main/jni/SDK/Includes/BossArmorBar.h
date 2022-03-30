#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BossArmorBar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossArmorBar"));
	}

	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& armorBarTransform() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& showAnimKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& restoreDuration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& hurtDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& showAnimId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _sequence() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BossArmorBar*))(Il2CppBase() + 0x1DE79F4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BossArmorBar*))(Il2CppBase() + 0x1DE7AE8))(this);
	}
	template <typename T = void> T ShowArmor() {
		return ((T (*)(BossArmorBar*))(Il2CppBase() + 0x1DE7BCC))(this);
	}
	template <typename T = void> T HideArmor() {
		return ((T (*)(BossArmorBar*))(Il2CppBase() + 0x1DE7C4C))(this);
	}
	template <typename T = void> T OnBossArmorChange(uintptr_t eventBase) {
		return ((T (*)(BossArmorBar*, uintptr_t))(Il2CppBase() + 0x1DE7CCC))(this, eventBase);
	}
	template <typename T = void> T OnBossArmorChangeb__11_0() {
		return ((T (*)(BossArmorBar*))(Il2CppBase() + 0x1DE7EF0))(this);
	}

};

}
