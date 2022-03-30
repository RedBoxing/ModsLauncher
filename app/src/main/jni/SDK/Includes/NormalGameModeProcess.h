#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NormalGameModeProcess
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NormalGameModeProcess"));
	}


	template <typename T = bool> T NeedGotoStatement(int32_t levelIndex) {
		return ((T (*)(NormalGameModeProcess*, int32_t))(Il2CppBase() + 0x4524964))(this, levelIndex);
	}
	template <typename T = int32_t> T FinalLevelIndex() {
		return ((T (*)(NormalGameModeProcess*))(Il2CppBase() + 0x4524A08))(this);
	}
	template <typename T = Il2CppString*> T GetMapManagerName(Il2CppString* branch, int32_t levelIdx) {
		return ((T (*)(NormalGameModeProcess*, Il2CppString*, int32_t))(Il2CppBase() + 0x4524A90))(this, branch, levelIdx);
	}

};

}
