#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MockUICanvas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MockUICanvas"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(MockUICanvas*))(Il2CppBase() + 0x41F5D9C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(MockUICanvas*))(Il2CppBase() + 0x41F5FF0))(this);
	}
	template <typename T = void> T ShowBattleFactors(bool isShow) {
		return ((T (*)(MockUICanvas*, bool))(Il2CppBase() + 0x41F604C))(this, isShow);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(MockUICanvas*, bool))(Il2CppBase() + 0x41F60BC))(this, pauseStatus);
	}

};

}
