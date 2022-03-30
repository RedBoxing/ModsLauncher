#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomItemUnlockThroughBattle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomItemUnlockThroughBattle"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& unlockRoad1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& unlockRoad2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& unlockRoad3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> static T& unlockRoad4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppDictionary<uintptr_t, int32_t>*>*> static T& roadDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T GetNeedUnlockOnStatement(int32_t level_index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1BF758C))(0, level_index);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetNeedUnlockOnStatement_1(int32_t road, int32_t level_index) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x1BF7700))(0, road, level_index);
	}
	template <typename T = int32_t> static T GetItemCurrentUnlockIndex(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BF79A4))(0, item);
	}
	template <typename T = int32_t> static T GetItemUnlockIndex(int32_t road, uintptr_t item) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x1BF7A4C))(0, road, item);
	}
	template <typename T = void> static T ChangeRoadWhenNeeded(int32_t levelIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1BF7B80))(0, levelIndex);
	}
	template <typename T = int32_t> static T GetRoad() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BF7634))(0);
	}
	template <typename T = void> static T SetRoad(int32_t road) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1BF7CC0))(0, road);
	}
	template <typename T = bool> static T GetUnlock(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1BF7448))(0, item);
	}
	template <typename T = void> static T SetUnlock(uintptr_t item, bool unlock) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x1BF7E60))(0, item, unlock);
	}
	template <typename T = void> static T SetBeforeRoadMark(int32_t before) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x1BF7D90))(0, before);
	}
	template <typename T = int32_t> static T GetBeforeRoadMark() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BF7F9C))(0);
	}
	template <typename T = void> static T ResetBeforeRoadMark() {
		return ((T (*)(void *))(Il2CppBase() + 0x1BF805C))(0);
	}

};

}
