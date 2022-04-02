#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HiddenLevelBuff {

class HiddenLevelBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HiddenLevelBuff", "HiddenLevelBuff"));
	}

	template <typename T = Il2CppString*> T& positiveMarkId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& negativeMarkId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& troopDeadMarkId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& levelClearMarkId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& positiveFactor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& negativeFactor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _factorModels() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _factorProcessor() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_PositiveMarkDropDownList() {
		return ((T (*)(HiddenLevelBuff*))(Il2CppBase() + 0x1A354C8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_NegativeMarkDropDownList() {
		return ((T (*)(HiddenLevelBuff*))(Il2CppBase() + 0x1A35574))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_TroopMarkDropDownList() {
		return ((T (*)(HiddenLevelBuff*))(Il2CppBase() + 0x1A35620))(this);
	}
	template <typename T = int32_t> static T get_RoundIndex() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A356CC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HiddenLevelBuff*))(Il2CppBase() + 0x1A35754))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HiddenLevelBuff*))(Il2CppBase() + 0x1A358F0))(this);
	}
	template <typename T = void> T OnSyncGetBuff(uintptr_t e) {
		return ((T (*)(HiddenLevelBuff*, uintptr_t))(Il2CppBase() + 0x1A359D4))(this, e);
	}
	template <typename T = void> T OnRoomCleared(uintptr_t roomX) {
		return ((T (*)(HiddenLevelBuff*, uintptr_t))(Il2CppBase() + 0x1A35BB0))(this, roomX);
	}

};

}
