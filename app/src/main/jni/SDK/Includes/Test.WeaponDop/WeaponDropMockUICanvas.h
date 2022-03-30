#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Test.WeaponDop {

class WeaponDropMockUICanvas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Test.WeaponDop", "WeaponDropMockUICanvas"));
	}


	template <typename T = void> T Awake() {
		return ((T (*)(WeaponDropMockUICanvas*))(Il2CppBase() + 0x43C26BC))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(WeaponDropMockUICanvas*))(Il2CppBase() + 0x43C2718))(this);
	}
	template <typename T = void> T ShowBattleFactors(bool isShow) {
		return ((T (*)(WeaponDropMockUICanvas*, bool))(Il2CppBase() + 0x43C2774))(this, isShow);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(WeaponDropMockUICanvas*, bool))(Il2CppBase() + 0x43C27E4))(this, pauseStatus);
	}

};

}
