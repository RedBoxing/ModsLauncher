#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class FishChipStoreItemService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "FishChipStoreItemService"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _storeConfigs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _currentConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& hasGotStoreConfig() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& storeItems() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& expireTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T RefreshStoreItem(Il2CppList<uintptr_t>* storeConfigs) {
		return ((T (*)(FishChipStoreItemService*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4502C7C))(this, storeConfigs);
	}
	template <typename T = bool> T get_hasAvailableConfig() {
		return ((T (*)(FishChipStoreItemService*))(Il2CppBase() + 0x4502F44))(this);
	}
	template <typename T = uintptr_t> T get_CurrentTime() {
		return ((T (*)(FishChipStoreItemService*))(Il2CppBase() + 0x4502FAC))(this);
	}
	template <typename T = bool> static T get_CanUseNetTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4503014))(0);
	}
	template <typename T = void> T UpdateCurrentAvailableConfig() {
		return ((T (*)(FishChipStoreItemService*))(Il2CppBase() + 0x4502CFC))(this);
	}
	template <typename T = bool> T get_IsCurrentConfigSuitable() {
		return ((T (*)(FishChipStoreItemService*))(Il2CppBase() + 0x45034A0))(this);
	}
	template <typename T = Il2CppString*> T get_currentConfigId() {
		return ((T (*)(FishChipStoreItemService*))(Il2CppBase() + 0x4503600))(this);
	}
	template <typename T = void> T SetStoreConfig(uintptr_t storeConfig, uintptr_t endTime) {
		return ((T (*)(FishChipStoreItemService*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4503078))(this, storeConfig, endTime);
	}

};

}
