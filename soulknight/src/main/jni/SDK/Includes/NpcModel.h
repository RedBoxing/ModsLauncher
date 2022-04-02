#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NpcModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NpcModel"));
	}

	template <typename T = uintptr_t> T& hidObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& npcPosition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& npcRotate() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
