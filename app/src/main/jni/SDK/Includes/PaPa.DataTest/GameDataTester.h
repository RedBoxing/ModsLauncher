#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa.DataTest {

class GameDataTester
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa.DataTest", "GameDataTester"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& char_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& pet_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& validate_roomObjectLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& test_scene() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_assetbundle_list() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DC598))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_related_data_path_list() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DC68C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_destroyed_gameobject_list() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DC7D8))(this);
	}
	template <typename T = uintptr_t> T SaveGameDataTest() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DC974))(this);
	}
	template <typename T = void> T SaveGameValidate(uintptr_t Process, void* validate_callback) {
		return ((T (*)(GameDataTester*, uintptr_t, void*))(Il2CppBase() + 0x26DCA54))(this, Process, validate_callback);
	}
	template <typename T = uintptr_t> T LoadGameDataTest() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DCCB0))(this);
	}
	template <typename T = void> T LoadGameDataValidate(uintptr_t process, void* data_validate) {
		return ((T (*)(GameDataTester*, uintptr_t, void*))(Il2CppBase() + 0x26DCD90))(this, process, data_validate);
	}
	template <typename T = void> T ValidateAboData(uintptr_t data, Il2CppArray<uintptr_t>* char_list, Il2CppArray<uintptr_t>* pet_list, Il2CppDictionary<uintptr_t, int32_t>* room_object_level) {
		return ((T (*)(GameDataTester*, uintptr_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppDictionary<uintptr_t, int32_t>*))(Il2CppBase() + 0x26DCF4C))(this, data, char_list, pet_list, room_object_level);
	}
	template <typename T = uintptr_t> T LoadTest() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DD8A4))(this);
	}
	template <typename T = void> T LoadValidate(uintptr_t Process, uintptr_t Validate) {
		return ((T (*)(GameDataTester*, uintptr_t, uintptr_t))(Il2CppBase() + 0x26DD984))(this, Process, Validate);
	}
	template <typename T = uintptr_t> T SaveTest() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DDA9C))(this);
	}
	template <typename T = void> T SaveValidate(uintptr_t Process, uintptr_t Validate) {
		return ((T (*)(GameDataTester*, uintptr_t, uintptr_t))(Il2CppBase() + 0x26DDB7C))(this, Process, Validate);
	}
	template <typename T = void> T SaveManagerInit() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DCBE4))(this);
	}
	template <typename T = uintptr_t> T SceneSetUp() {
		return ((T (*)(GameDataTester*))(Il2CppBase() + 0x26DDC30))(this);
	}
	template <typename T = void> T HeroProcess(int32_t index) {
		return ((T (*)(GameDataTester*, int32_t))(Il2CppBase() + 0x26DDD10))(this, index);
	}
	template <typename T = void> T HeroDataCheck(int32_t index, Il2CppArray<uintptr_t>* data_list) {
		return ((T (*)(GameDataTester*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x26DDE88))(this, index, data_list);
	}
	template <typename T = void> T SkinProcess(int32_t hero_index, int32_t skin_index) {
		return ((T (*)(GameDataTester*, int32_t, int32_t))(Il2CppBase() + 0x26DE13C))(this, hero_index, skin_index);
	}
	template <typename T = void> T SkinDataCheck(int32_t hero_index, int32_t skin_index, Il2CppArray<uintptr_t>* data_list) {
		return ((T (*)(GameDataTester*, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x26DE294))(this, hero_index, skin_index, data_list);
	}
	template <typename T = void> T PetProcess(uintptr_t pet) {
		return ((T (*)(GameDataTester*, uintptr_t))(Il2CppBase() + 0x26DE4D0))(this, pet);
	}
	template <typename T = void> T PetDataCheck(uintptr_t pet, Il2CppArray<uintptr_t>* data_list) {
		return ((T (*)(GameDataTester*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x26DE5EC))(this, pet, data_list);
	}

};

}
