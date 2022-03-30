#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace EnemyGenerator {

class ShowAfterDieGenerateProcessor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "EnemyGenerator", "ShowAfterDieGenerateProcessor"));
	}

	template <typename T = Il2CppString*> T& enemyId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& hideEnemyCountMin() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& hideEnemyCountMax() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& multiEnemyRadius() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _enemyTags() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _hideEnemyCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<void*>*> T& _targetHideEnemies() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _currentIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T ProcessEnemyShow(uintptr_t em, uintptr_t enemyController, uintptr_t random) {
		return ((T (*)(ShowAfterDieGenerateProcessor*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1FEC4E0))(this, em, enemyController, random);
	}
	template <typename T = void> T OnTargetEnemyDead(uintptr_t obj, int32_t index) {
		return ((T (*)(ShowAfterDieGenerateProcessor*, uintptr_t, int32_t))(Il2CppBase() + 0x1FEC804))(this, obj, index);
	}
	template <typename T = Il2CppVector3> static T EnemyPosition(uintptr_t room, Il2CppVector3 wordPosition) {
		return ((T (*)(void *, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x1FED098))(0, room, wordPosition);
	}
	template <typename T = bool> T IsSetEnemyHide(uintptr_t enemyController) {
		return ((T (*)(ShowAfterDieGenerateProcessor*, uintptr_t))(Il2CppBase() + 0x1FED2A4))(this, enemyController);
	}
	template <typename T = void> T BeforeCreatePart(uintptr_t em, uintptr_t random, int32_t part) {
		return ((T (*)(ShowAfterDieGenerateProcessor*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1FED39C))(this, em, random, part);
	}
	template <typename T = void> T AfterCreatePart(uintptr_t enemyMaker, uintptr_t random, int32_t part) {
		return ((T (*)(ShowAfterDieGenerateProcessor*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1FED530))(this, enemyMaker, random, part);
	}
	template <typename T = void> T BeforeRoomCreated(uintptr_t room) {
		return ((T (*)(ShowAfterDieGenerateProcessor*, uintptr_t))(Il2CppBase() + 0x1FED7D8))(this, room);
	}
	template <typename T = void> T CreateShowUpEffect(Il2CppVector3 position) {
		return ((T (*)(ShowAfterDieGenerateProcessor*, Il2CppVector3))(Il2CppBase() + 0x1FECE28))(this, position);
	}

};

}
