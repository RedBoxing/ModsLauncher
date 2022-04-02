#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BackupGameData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BackupGameData"));
	}

	template <typename T = uintptr_t> T& gameData() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Merge(uintptr_t otherGameData, uintptr_t otherStatisticData) {
		return ((T (*)(BackupGameData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4188080))(this, otherGameData, otherStatisticData);
	}
	template <typename T = void> T CoverGameSafely() {
		return ((T (*)(BackupGameData*))(Il2CppBase() + 0x41881DC))(this);
	}

};

}
