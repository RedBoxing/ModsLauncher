#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ControllerAssignmentSaveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ControllerAssignmentSaveInfo"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& players() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_playerCount() {
		return ((T (*)(ControllerAssignmentSaveInfo*))(Il2CppBase() + 0x20533EC))(this);
	}
	template <typename T = int32_t> T IndexOfPlayer(int32_t playerId) {
		return ((T (*)(ControllerAssignmentSaveInfo*, int32_t))(Il2CppBase() + 0x2052B2C))(this, playerId);
	}
	template <typename T = bool> T ContainsPlayer(int32_t playerId) {
		return ((T (*)(ControllerAssignmentSaveInfo*, int32_t))(Il2CppBase() + 0x2052AA8))(this, playerId);
	}

};

}
