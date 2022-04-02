#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TowerNodeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TowerNodeData"));
	}

	template <typename T = uintptr_t> T& centerRoomName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& position() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& link() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
