#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ChallengeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChallengeInfo"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& challenges() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& DifficultyPattern() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& _difficulty2Chanllenges() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _randomBuffer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& _exclusiveSpecifiedChallenge() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& contradictFactors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T get_difficulty2Chanllenges() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x186FF48))(this);
	}
	template <typename T = void> T GenDifficulty2Chanllenges() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x186FFB8))(this);
	}
	template <typename T = uintptr_t> static T get_info() {
		return ((T (*)(void *))(Il2CppBase() + 0x1870284))(0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetChallenges(uintptr_t random) {
		return ((T (*)(ChallengeInfo*, uintptr_t))(Il2CppBase() + 0x18703CC))(this, random);
	}
	template <typename T = uintptr_t> T GetChallenge(int32_t difficulty, uintptr_t random) {
		return ((T (*)(ChallengeInfo*, int32_t, uintptr_t))(Il2CppBase() + 0x1870A70))(this, difficulty, random);
	}
	template <typename T = uintptr_t> T GetChallenge_1(uintptr_t rg_random) {
		return ((T (*)(ChallengeInfo*, uintptr_t))(Il2CppBase() + 0x1870FE4))(this, rg_random);
	}
	template <typename T = int32_t> T GetRewardLevel(Il2CppList<uintptr_t>* selectedChallenges) {
		return ((T (*)(ChallengeInfo*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1871258))(this, selectedChallenges);
	}
	template <typename T = Il2CppList<int32_t>*> T GetDifficultyPattern(uintptr_t random) {
		return ((T (*)(ChallengeInfo*, uintptr_t))(Il2CppBase() + 0x18706C8))(this, random);
	}
	template <typename T = void> T CheckDifficulty() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x187154C))(this);
	}
	template <typename T = void> T Reorder() {
		return ((T (*)(ChallengeInfo*))(Il2CppBase() + 0x1871AF0))(this);
	}
	template <typename T = bool> static T IsFactorContradict(Il2CppList<uintptr_t>* factors, uintptr_t newFactor) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1870C94))(0, factors, newFactor);
	}
	template <typename T = uintptr_t> T GetSprite(uintptr_t factor) {
		return ((T (*)(ChallengeInfo*, uintptr_t))(Il2CppBase() + 0x1871C38))(this, factor);
	}

};

}
