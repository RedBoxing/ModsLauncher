#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace EnemyGenerator {

class IGenerateProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "EnemyGenerator", "IGenerateProcessor"));
	}


	template <typename T = void> T ProcessEnemyShow(uintptr_t em, uintptr_t enemyController, uintptr_t random) {
		return ((T (*)(IGenerateProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, em, enemyController, random);
	}
	template <typename T = bool> T IsSetEnemyHide(uintptr_t enemyController) {
		return ((T (*)(IGenerateProcessor*, uintptr_t))(Il2CppBase() + 0x0))(this, enemyController);
	}
	template <typename T = void> T BeforeCreatePart(uintptr_t em, uintptr_t random, int32_t part) {
		return ((T (*)(IGenerateProcessor*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, em, random, part);
	}
	template <typename T = void> T AfterCreatePart(uintptr_t em, uintptr_t random, int32_t part) {
		return ((T (*)(IGenerateProcessor*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, em, random, part);
	}

};

}
