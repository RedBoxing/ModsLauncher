#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MountEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MountEvent"));
	}

	template <typename T = Il2CppString*> T& mount_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
