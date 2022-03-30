#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace MuseumUnlock {

class SkinUnlockModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MuseumUnlock", "SkinUnlockModel"));
	}

	template <typename T = uintptr_t> T& UnlockHero() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SkinIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_UnlockHero() {
		return ((T (*)(SkinUnlockModel*))(Il2CppBase() + 0x437C764))(this);
	}
	template <typename T = int32_t> T get_SkinIndex() {
		return ((T (*)(SkinUnlockModel*))(Il2CppBase() + 0x437C76C))(this);
	}
	template <typename T = uintptr_t> T get_sprite() {
		return ((T (*)(SkinUnlockModel*))(Il2CppBase() + 0x437C938))(this);
	}
	template <typename T = Il2CppString*> T get_rewardText() {
		return ((T (*)(SkinUnlockModel*))(Il2CppBase() + 0x437CA7C))(this);
	}
	template <typename T = void> T Unlock() {
		return ((T (*)(SkinUnlockModel*))(Il2CppBase() + 0x437CE1C))(this);
	}
	template <typename T = bool> T HasUnlockItem() {
		return ((T (*)(SkinUnlockModel*))(Il2CppBase() + 0x437CE84))(this);
	}

};

}
