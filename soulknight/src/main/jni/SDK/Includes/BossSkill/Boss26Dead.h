#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace BossSkill {

class Boss26Dead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BossSkill", "Boss26Dead"));
	}

	template <typename T = float> T& deadAnimDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& deadFadeCurve() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& deadParticle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& renderers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& materialFadeKey() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _endOfFrame() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _materials() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _materialFadeId() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(Boss26Dead*))(Il2CppBase() + 0x1B86C0C))(this);
	}
	template <typename T = void> T EnemyDead(uintptr_t obj) {
		return ((T (*)(Boss26Dead*, uintptr_t))(Il2CppBase() + 0x1B86E28))(this, obj);
	}
	template <typename T = uintptr_t> T EnemyDead_1() {
		return ((T (*)(Boss26Dead*))(Il2CppBase() + 0x1B86EAC))(this);
	}

};

}
