#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.IAPTest {

class SDKManagerTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.IAPTest", "SDKManagerTester"));
	}

	template <typename T = uintptr_t> T& test_scene() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isInitialized() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& controller_name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& provider_name() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_related_data_path_list() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4561A08))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_destroyed_gameobject_list() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4561AFC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_assetbundle_list() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4561C98))(this);
	}
	template <typename T = void> T Before() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4561D8C))(this);
	}
	template <typename T = void> T After() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x456222C))(this);
	}
	template <typename T = uintptr_t> T BuyHeroTest() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x45622A8))(this);
	}
	template <typename T = uintptr_t> T BuySkinTest() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4562388))(this);
	}
	template <typename T = uintptr_t> T BuyPlantpotTest() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4562468))(this);
	}
	template <typename T = uintptr_t> T BuyCoinTest() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4562548))(this);
	}
	template <typename T = uintptr_t> T SetUpTestScene() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4562628))(this);
	}
	template <typename T = uintptr_t> T ClearScene() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x4562708))(this);
	}
	template <typename T = void> T ClearController() {
		return ((T (*)(SDKManagerTester*))(Il2CppBase() + 0x45627E8))(this);
	}
	template <typename T = void> T PrivateStaticFieldSet(uintptr_t type, Il2CppString* fieldName, uintptr_t fieldValue, uintptr_t instance) {
		return ((T (*)(SDKManagerTester*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4562940))(this, type, fieldName, fieldValue, instance);
	}

};

}
