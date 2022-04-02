#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameTimeStatistic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameTimeStatistic"));
	}


	template <typename T = Il2CppString*> static T get_FilePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x442D930))(0);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(GameTimeStatistic*))(Il2CppBase() + 0x442D9C0))(this);
	}
	template <typename T = int32_t> static T GetTotalTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x442DB80))(0);
	}

};

}
