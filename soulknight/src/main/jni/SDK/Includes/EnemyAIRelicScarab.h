#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyAIRelicScarab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyAIRelicScarab"));
	}

	template <typename T = uintptr_t> T& bulletInfo() {
		return *(T*)((uintptr_t)this + 0x238);
	}
	template <typename T = float> T& triggerRange() {
		return *(T*)((uintptr_t)this + 0x240);
	}
	template <typename T = float> T& atkCd() {
		return *(T*)((uintptr_t)this + 0x244);
	}
	template <typename T = Il2CppString*> T& atkAnimKey() {
		return *(T*)((uintptr_t)this + 0x248);
	}
	template <typename T = int32_t> T& atkProbability() {
		return *(T*)((uintptr_t)this + 0x250);
	}
	template <typename T = uintptr_t> T& atkReleaseTransform() {
		return *(T*)((uintptr_t)this + 0x258);
	}
	template <typename T = Il2CppVector3> T& atkPositionOffset() {
		return *(T*)((uintptr_t)this + 0x260);
	}
	template <typename T = uintptr_t> T& attackClip() {
		return *(T*)((uintptr_t)this + 0x270);
	}
	template <typename T = int32_t> T& _atkAnimId() {
		return *(T*)((uintptr_t)this + 0x278);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(EnemyAIRelicScarab*))(Il2CppBase() + 0x2A3778C))(this);
	}
	template <typename T = void> T RunReflection() {
		return ((T (*)(EnemyAIRelicScarab*))(Il2CppBase() + 0x2A37904))(this);
	}
	template <typename T = void> T FixedRotation() {
		return ((T (*)(EnemyAIRelicScarab*))(Il2CppBase() + 0x2A37E04))(this);
	}
	template <typename T = void> T ReleaseBullet() {
		return ((T (*)(EnemyAIRelicScarab*))(Il2CppBase() + 0x2A38138))(this);
	}
	template <typename T = void> T iFixBaseProxy_RunReflection() {
		return ((T (*)(EnemyAIRelicScarab*))(Il2CppBase() + 0x2A384AC))(this);
	}
	template <typename T = void> T iFixBaseProxy_FixedRotation() {
		return ((T (*)(EnemyAIRelicScarab*))(Il2CppBase() + 0x2A384B4))(this);
	}

};

}
