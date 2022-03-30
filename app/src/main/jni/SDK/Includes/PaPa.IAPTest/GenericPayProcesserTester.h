#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.IAPTest {

class GenericPayProcesserTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.IAPTest", "GenericPayProcesserTester"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_related_data_path_list() {
		return ((T (*)(GenericPayProcesserTester*))(Il2CppBase() + 0x455C1C0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_destroyed_gameobject_list() {
		return ((T (*)(GenericPayProcesserTester*))(Il2CppBase() + 0x455C344))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_assetbundle_list() {
		return ((T (*)(GenericPayProcesserTester*))(Il2CppBase() + 0x455C534))(this);
	}
	template <typename T = uintptr_t> T PurchaseFishTest() {
		return ((T (*)(GenericPayProcesserTester*))(Il2CppBase() + 0x455C628))(this);
	}
	template <typename T = uintptr_t> T PurchaseGemTest() {
		return ((T (*)(GenericPayProcesserTester*))(Il2CppBase() + 0x455C708))(this);
	}
	template <typename T = uintptr_t> T PurchaseGemTest_1(Il2CppArray<uintptr_t>* coin_entries) {
		return ((T (*)(GenericPayProcesserTester*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x455C7E8))(this, coin_entries);
	}
	template <typename T = uintptr_t> T PurchaseRoleTest() {
		return ((T (*)(GenericPayProcesserTester*))(Il2CppBase() + 0x455C8F4))(this);
	}
	template <typename T = uintptr_t> T PurchaseSkinTest() {
		return ((T (*)(GenericPayProcesserTester*))(Il2CppBase() + 0x455C9D4))(this);
	}
	template <typename T = uintptr_t> T PurchasePlantpotTest() {
		return ((T (*)(GenericPayProcesserTester*))(Il2CppBase() + 0x455CAB4))(this);
	}
	template <typename T = uintptr_t> T PurchaseTest(Il2CppString* product_name, Il2CppString* product_id, uintptr_t test_callback) {
		return ((T (*)(GenericPayProcesserTester*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x455CB94))(this, product_name, product_id, test_callback);
	}

};

}
