#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PlayerSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerSetting"));
	}

	template <typename T = int32_t> T& playerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& playerMice() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(PlayerSetting*))(Il2CppBase() + 0x1E84ABC))(this);
	}

};

}
