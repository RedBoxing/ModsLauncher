#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PetRewardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PetRewardInfo"));
	}

	template <typename T = uintptr_t> T& pet() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T GetReward(bool showUi) {
		return ((T (*)(PetRewardInfo*, bool))(Il2CppBase() + 0x438C464))(this, showUi);
	}
	template <typename T = int32_t> T GetCount() {
		return ((T (*)(PetRewardInfo*))(Il2CppBase() + 0x438C694))(this);
	}
	template <typename T = Il2CppString*> T GetName() {
		return ((T (*)(PetRewardInfo*))(Il2CppBase() + 0x438C5E4))(this);
	}
	template <typename T = Il2CppString*> T GetDesc() {
		return ((T (*)(PetRewardInfo*))(Il2CppBase() + 0x438C6F4))(this);
	}
	template <typename T = uintptr_t> T GetSprite() {
		return ((T (*)(PetRewardInfo*))(Il2CppBase() + 0x438C518))(this);
	}
	template <typename T = uintptr_t> T GetFlag() {
		return ((T (*)(PetRewardInfo*))(Il2CppBase() + 0x438C7BC))(this);
	}

};

}
