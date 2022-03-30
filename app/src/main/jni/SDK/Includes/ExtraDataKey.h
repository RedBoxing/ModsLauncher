#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ExtraDataKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtraDataKey"));
	}

	template <typename T = Il2CppString*> static T& ROOM_MECH_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ROOM_PET_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& UNLOCK_HAND_SWORD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
