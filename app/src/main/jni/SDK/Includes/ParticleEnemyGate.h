#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ParticleEnemyGate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ParticleEnemyGate"));
	}


	template <typename T = void> T Start() {
		return ((T (*)(ParticleEnemyGate*))(Il2CppBase() + 0x4570BC4))(this);
	}

};

}
