#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UpdateMultiRoomSkinEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UpdateMultiRoomSkinEvent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& infos() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
