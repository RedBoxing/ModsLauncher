#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SaveData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveData"));
	}


	template <typename T = Il2CppString*> static T NewGameCoverTips(uintptr_t gameMode, bool createNewGame) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4383558))(0, gameMode, createNewGame);
	}

};

}
