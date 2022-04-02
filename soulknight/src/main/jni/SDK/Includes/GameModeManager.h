#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GameModeManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameModeManager"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& modeDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x442D0B8))(0);
	}
	template <typename T = uintptr_t> T GetClassInstance(uintptr_t gameMode) {
		return ((T (*)(GameModeManager*, uintptr_t))(Il2CppBase() + 0x442D4A8))(this, gameMode);
	}
	template <typename T = uintptr_t> T GetProcess(uintptr_t mode) {
		return ((T (*)(GameModeManager*, uintptr_t))(Il2CppBase() + 0x442D5E8))(this, mode);
	}

};

}
