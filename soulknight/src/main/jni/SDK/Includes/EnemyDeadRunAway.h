#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemyDeadRunAway
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemyDeadRunAway"));
	}

	template <typename T = uintptr_t> T& runAway() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(EnemyDeadRunAway*))(Il2CppBase() + 0x1FE7634))(this);
	}
	template <typename T = void> T AddDeadCallback() {
		return ((T (*)(EnemyDeadRunAway*))(Il2CppBase() + 0x1FE7694))(this);
	}
	template <typename T = void> T PauseRunning() {
		return ((T (*)(EnemyDeadRunAway*))(Il2CppBase() + 0x1FE7788))(this);
	}
	template <typename T = void> T OnReborn() {
		return ((T (*)(EnemyDeadRunAway*))(Il2CppBase() + 0x1FE7828))(this);
	}
	template <typename T = void> T AddDeadCallbackb__1_0(uintptr_t rge) {
		return ((T (*)(EnemyDeadRunAway*, uintptr_t))(Il2CppBase() + 0x1FE78AC))(this, rge);
	}

};

}
