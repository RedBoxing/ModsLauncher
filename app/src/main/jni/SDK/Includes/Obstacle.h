#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Obstacle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Obstacle"));
	}

	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& size() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& boxContents() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& floors() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& extraFloorRate() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(Obstacle*))(Il2CppBase() + 0x1DD0910))(this);
	}

};

}
