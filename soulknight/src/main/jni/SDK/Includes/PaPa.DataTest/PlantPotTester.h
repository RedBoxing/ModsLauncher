#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.DataTest {

class PlantPotTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.DataTest", "PlantPotTester"));
	}

	template <typename T = uintptr_t> T& test_scene() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& plant_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_destroyed_gameobject_list() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E68EC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_assetbundle_list() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E6B84))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_related_data_path_list() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E6C78))(this);
	}
	template <typename T = uintptr_t> T InitUnlockStateTest() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E6E18))(this);
	}
	template <typename T = uintptr_t> T UnlockTest() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E6EF8))(this);
	}
	template <typename T = uintptr_t> T PlantDataTest() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E6FD8))(this);
	}
	template <typename T = uintptr_t> T IntegratedPlantPotTest() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E70B8))(this);
	}
	template <typename T = void> T CheckAllPlantPot(int32_t unlocked_index) {
		return ((T (*)(PlantPotTester*, int32_t))(Il2CppBase() + 0x26E7198))(this, unlocked_index);
	}
	template <typename T = void> T LockedPotValidate(int32_t pot_index) {
		return ((T (*)(PlantPotTester*, int32_t))(Il2CppBase() + 0x26E7440))(this, pot_index);
	}
	template <typename T = void> T UnlockedPotValidate(int32_t pot_index) {
		return ((T (*)(PlantPotTester*, int32_t))(Il2CppBase() + 0x26E72B8))(this, pot_index);
	}
	template <typename T = void> T PlantInitStateValidate(Il2CppString* plant_name, uintptr_t plant_pot, uintptr_t plant) {
		return ((T (*)(PlantPotTester*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x26E7790))(this, plant_name, plant_pot, plant);
	}
	template <typename T = uintptr_t> T GetPlantPot(int32_t pot_index) {
		return ((T (*)(PlantPotTester*, int32_t))(Il2CppBase() + 0x26E75C8))(this, pot_index);
	}
	template <typename T = uintptr_t> T GetPlant(int32_t pot_index) {
		return ((T (*)(PlantPotTester*, int32_t))(Il2CppBase() + 0x26E7A20))(this, pot_index);
	}
	template <typename T = bool> T IsStateSpriteShown(uintptr_t plant_pot, Il2CppString* state) {
		return ((T (*)(PlantPotTester*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x26E76B8))(this, plant_pot, state);
	}
	template <typename T = uintptr_t> T TestSceneSetUp() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E7B50))(this);
	}
	template <typename T = uintptr_t> T TestSceneTearDown() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E7C30))(this);
	}
	template <typename T = void> T UnlockAllPot() {
		return ((T (*)(PlantPotTester*))(Il2CppBase() + 0x26E7D10))(this);
	}

};

}
