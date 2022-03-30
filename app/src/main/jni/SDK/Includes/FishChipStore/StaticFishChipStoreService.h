#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FishChipStore {

class StaticFishChipStoreService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FishChipStore", "StaticFishChipStoreService"));
	}

	template <typename T = uintptr_t> static T& _itemService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T Init(Il2CppList<uintptr_t>* storeConfigs) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x450B900))(0, storeConfigs);
	}
	template <typename T = void> static T RefreshTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x450BBD8))(0);
	}
	template <typename T = void> static T RefreshStoreItem(Il2CppList<uintptr_t>* storeConfigs) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x450BDCC))(0, storeConfigs);
	}
	template <typename T = void> static T UpdateConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x450BEB4))(0);
	}
	template <typename T = bool> static T get_HasGetStoreItem() {
		return ((T (*)(void *))(Il2CppBase() + 0x450412C))(0);
	}
	template <typename T = uintptr_t> static T get_CurrentTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x450BF80))(0);
	}
	template <typename T = uintptr_t> static T get_ExpireTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x450C01C))(0);
	}
	template <typename T = uintptr_t> static T get_countTimeSpan() {
		return ((T (*)(void *))(Il2CppBase() + 0x4507728))(0);
	}
	template <typename T = uintptr_t> static T GetStoreItem(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x45052C8))(0, index);
	}
	template <typename T = void> static T UpdateLocalConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x45077E0))(0);
	}
	template <typename T = Il2CppString*> static T get_CurrentConfigId() {
		return ((T (*)(void *))(Il2CppBase() + 0x450C0B8))(0);
	}

};

}
