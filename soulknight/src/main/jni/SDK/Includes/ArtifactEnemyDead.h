#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactEnemyDead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactEnemyDead"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(ArtifactEnemyDead*))(Il2CppBase() + 0x1CA1E80))(this);
	}
	template <typename T = void> T Startb__0_0(uintptr_t e) {
		return ((T (*)(ArtifactEnemyDead*, uintptr_t))(Il2CppBase() + 0x1CA1FBC))(this, e);
	}

};

}
