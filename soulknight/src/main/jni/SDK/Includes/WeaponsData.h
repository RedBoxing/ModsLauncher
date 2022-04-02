#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WeaponsData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponsData"));
	}

	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& DisableUnlockByPick() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Path() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& Materials() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& OldMaterials() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
