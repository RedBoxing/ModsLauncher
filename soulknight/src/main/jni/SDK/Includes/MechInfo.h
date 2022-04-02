#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MechInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MechInfo"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& unlockKey() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& maxHp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& defence() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& materials() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isHidden() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
