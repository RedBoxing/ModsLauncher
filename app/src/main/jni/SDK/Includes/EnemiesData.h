#pragma once
#include "Il2Cpp/Il2Cpp.h"

class EnemiesData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EnemiesData"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Hp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& Speed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& SpeedRate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Critical() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Drops() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& DropGroups() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

}
