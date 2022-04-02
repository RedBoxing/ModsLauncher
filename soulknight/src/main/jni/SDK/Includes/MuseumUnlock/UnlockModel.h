#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace MuseumUnlock {

class UnlockModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MuseumUnlock", "UnlockModel"));
	}

	template <typename T = Il2CppString*> T& UnlockTipKey() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Item() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_sprite() {
		return ((T (*)(UnlockModel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_rewardText() {
		return ((T (*)(UnlockModel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_UnlockTipKey() {
		return ((T (*)(UnlockModel*))(Il2CppBase() + 0x437D048))(this);
	}
	template <typename T = uintptr_t> T get_Item() {
		return ((T (*)(UnlockModel*))(Il2CppBase() + 0x437C774))(this);
	}
	template <typename T = bool> T CanUnlockItem(uintptr_t data) {
		return ((T (*)(UnlockModel*, uintptr_t))(Il2CppBase() + 0x437BF80))(this, data);
	}
	template <typename T = Il2CppString*> T get_UnlockTipText() {
		return ((T (*)(UnlockModel*))(Il2CppBase() + 0x437D050))(this);
	}
	template <typename T = void> T Unlock() {
		return ((T (*)(UnlockModel*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T HasUnlockItem() {
		return ((T (*)(UnlockModel*))(Il2CppBase() + 0x0))(this);
	}

};

}
