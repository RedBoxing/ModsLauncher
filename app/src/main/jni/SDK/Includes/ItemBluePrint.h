#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ItemBluePrint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ItemBluePrint"));
	}

	template <typename T = Il2CppString*> T& _targetName() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& researchMaterial() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = bool> T& noBlueprint() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& isHidden() {
		return *(T*)((uintptr_t)this + 0xE1);
	}
	template <typename T = int32_t> T& bluePrintLevel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& weaponDropLevel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}

	template <typename T = Il2CppString*> T get_targetName() {
		return ((T (*)(ItemBluePrint*))(Il2CppBase() + 0x1A52C44))(this);
	}

};

}
