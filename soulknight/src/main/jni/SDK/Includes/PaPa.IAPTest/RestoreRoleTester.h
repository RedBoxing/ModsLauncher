#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.IAPTest {

class RestoreRoleTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.IAPTest", "RestoreRoleTester"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_related_data_path_list() {
		return ((T (*)(RestoreRoleTester*))(Il2CppBase() + 0x455F424))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_destroyed_gameobject_list() {
		return ((T (*)(RestoreRoleTester*))(Il2CppBase() + 0x455F518))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_assetbundle_list() {
		return ((T (*)(RestoreRoleTester*))(Il2CppBase() + 0x455F708))(this);
	}
	template <typename T = uintptr_t> T RestoreGemTest() {
		return ((T (*)(RestoreRoleTester*))(Il2CppBase() + 0x455F798))(this);
	}
	template <typename T = uintptr_t> T RestoreFishTest() {
		return ((T (*)(RestoreRoleTester*))(Il2CppBase() + 0x455F878))(this);
	}
	template <typename T = uintptr_t> T RestoreHero() {
		return ((T (*)(RestoreRoleTester*))(Il2CppBase() + 0x455F948))(this);
	}
	template <typename T = uintptr_t> T RestoreSkin() {
		return ((T (*)(RestoreRoleTester*))(Il2CppBase() + 0x455FA28))(this);
	}
	template <typename T = uintptr_t> T RestorePlantpot() {
		return ((T (*)(RestoreRoleTester*))(Il2CppBase() + 0x455FB08))(this);
	}

};

}
