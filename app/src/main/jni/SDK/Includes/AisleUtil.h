#pragma once
#include "Il2Cpp/Il2Cpp.h"

class AisleUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AisleUtil"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, Il2CppVector3>*> static T& Direction2StartPositionDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> static T GetAisleFloorCenterPosition(uintptr_t aisle) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A186F0))(0, aisle);
	}
	template <typename T = void> static T GetAisleRect(uintptr_t aisle, uintptr_t* width, uintptr_t* height) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x1A188C8))(0, aisle, width, height);
	}

};

}
