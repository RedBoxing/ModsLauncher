#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWeaponStationTempSkinData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWeaponStationTempSkinData"));
	}

	template <typename T = Il2CppDictionary<void*, Il2CppArray<uintptr_t>*>*> static T& skin_drop_desc_dic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
