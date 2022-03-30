#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace VacantWall {

class EnterVacantWall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "VacantWall", "EnterVacantWall"));
	}

	template <typename T = uintptr_t> T& attachedRoom() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& attachedAisle() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& collider2D() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
