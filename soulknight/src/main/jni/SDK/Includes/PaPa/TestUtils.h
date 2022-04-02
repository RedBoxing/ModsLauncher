#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace PaPa {

class TestUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PaPa", "TestUtils"));
	}


	template <typename T = void> static T MInvokeNoReturn(uintptr_t type, Il2CppString* method_name, uintptr_t instance_class) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4564F34))(0, type, method_name, instance_class);
	}
	template <typename T = uintptr_t> static T FieldInvokeGet(uintptr_t type, Il2CppString* fieldName, uintptr_t instance) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4564FEC))(0, type, fieldName, instance);
	}
	template <typename T = void> static T FieldInvokeSet(uintptr_t type, Il2CppString* fieldName, uintptr_t fieldValue, uintptr_t instance) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x45650AC))(0, type, fieldName, fieldValue, instance);
	}
	template <typename T = void> static T ClearData(Il2CppArray<uintptr_t>* path_list) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x455BF14))(0, path_list);
	}
	template <typename T = void> static T ClearData_1(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4561E28))(0, path);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T DeepCopy(Il2CppArray<uintptr_t>* list) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x456517C))(0, list);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T DeepCopy_1(Il2CppArray<uintptr_t>* list) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x45654D8))(0, list);
	}
	template <typename T = bool> static T ObjectEquals(uintptr_t obj1, uintptr_t obj2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, obj1, obj2);
	}
	template <typename T = void> static T InitData() {
		return ((T (*)(void *))(Il2CppBase() + 0x45656B4))(0);
	}
	template <typename T = uintptr_t> static T LoadSceneAddictive(Il2CppString* loaded_scene) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x455F2F8))(0, loaded_scene);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetAssetBundle(Il2CppArray<uintptr_t>* bundle_names) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x455BDE0))(0, bundle_names);
	}
	template <typename T = uintptr_t> static T GetAssetBundle_1(Il2CppString* bundle_name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4561EA8))(0, bundle_name);
	}
	template <typename T = void> static T InitItemData() {
		return ((T (*)(void *))(Il2CppBase() + 0x455EF8C))(0);
	}
	template <typename T = void> static T InitPlant() {
		return ((T (*)(void *))(Il2CppBase() + 0x4565970))(0);
	}
	template <typename T = void> static T RGSaveManagerSave() {
		return ((T (*)(void *))(Il2CppBase() + 0x4565B5C))(0);
	}
	template <typename T = void> static T DestroyGameObject(Il2CppArray<uintptr_t>* game_objects) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x455C0A8))(0, game_objects);
	}
	template <typename T = int32_t> static T RegularSkin(int32_t skin_cost) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4565C58))(0, skin_cost);
	}
	template <typename T = uintptr_t> static T GetUnlockInfo(Il2CppList<int32_t>* hero_skin_length_list, int32_t pet_length) {
		return ((T (*)(void *, Il2CppList<int32_t>*, int32_t))(Il2CppBase() + 0x4565CBC))(0, hero_skin_length_list, pet_length);
	}
	template <typename T = Il2CppString*> static T BranchToString(uintptr_t branch) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4565FE8))(0, branch);
	}

};

}
