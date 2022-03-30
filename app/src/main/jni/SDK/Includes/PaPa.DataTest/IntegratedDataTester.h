#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.DataTest {

class IntegratedDataTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.DataTest", "IntegratedDataTester"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_related_data_path_list() {
		return ((T (*)(IntegratedDataTester*))(Il2CppBase() + 0x26E1590))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_assetbundle_list() {
		return ((T (*)(IntegratedDataTester*))(Il2CppBase() + 0x26E16DC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_destroyed_gameobject_list() {
		return ((T (*)(IntegratedDataTester*))(Il2CppBase() + 0x26E176C))(this);
	}
	template <typename T = uintptr_t> T InitTest() {
		return ((T (*)(IntegratedDataTester*))(Il2CppBase() + 0x26E19B0))(this);
	}
	template <typename T = uintptr_t> T SaveLoadDataTest() {
		return ((T (*)(IntegratedDataTester*))(Il2CppBase() + 0x26E1A90))(this);
	}
	template <typename T = void> T PlayerPrefsValidation(Il2CppArray<uintptr_t>* char_list, Il2CppArray<uintptr_t>* pet_list) {
		return ((T (*)(IntegratedDataTester*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x26E1B70))(this, char_list, pet_list);
	}
	template <typename T = void> T RGDataValidation(Il2CppArray<uintptr_t>* char_list, Il2CppArray<uintptr_t>* pet_list) {
		return ((T (*)(IntegratedDataTester*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x26E247C))(this, char_list, pet_list);
	}
	template <typename T = void> T UnlockRGSaveManagerData(uintptr_t unlock_info) {
		return ((T (*)(IntegratedDataTester*, uintptr_t))(Il2CppBase() + 0x26E2D0C))(this, unlock_info);
	}

};

}
