#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace MuseumUnlock {

class UnlockItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MuseumUnlock", "UnlockItem"));
	}

	template <typename T = Il2CppString*> T& itemId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& rewardType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& unlockLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& unlockContent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void*> T get_RewardTypeDropDownList() {
		return ((T (*)(UnlockItem*))(Il2CppBase() + 0x437CEE8))(this);
	}

};

}
