#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponSkinLRChanger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponSkinLRChanger"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& handSpriteDic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppVector3>*> T& handPositionDic() {
		return *(T*)((uintptr_t)this + 0x60);
	}


};

}
