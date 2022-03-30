#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DigModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DigModel"));
	}

	template <typename T = Il2CppVector3> T& bossDoorCenter() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& entranceRoomPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& entranceDoorCenter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& obstacles() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
