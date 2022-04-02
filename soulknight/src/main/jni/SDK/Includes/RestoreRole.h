#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RestoreRole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RestoreRole"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& key2Hero() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& key2Skin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& fish2Count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& RMB_HeroUnlockEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = void*> static T& RMB_SkinUnlockEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = void*> static T& RMB_SkillUnlockEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& _newPackageDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> static T IsGemKey(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CC428))(0, key);
	}
	template <typename T = bool> static T IsFish(Il2CppString* productName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CC4A4))(0, productName);
	}
	template <typename T = void> static T add_RMB_HeroUnlockEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x42CC564))(0, value);
	}
	template <typename T = void> static T remove_RMB_HeroUnlockEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x42CC694))(0, value);
	}
	template <typename T = void> static T add_RMB_SkinUnlockEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x42CC7C4))(0, value);
	}
	template <typename T = void> static T remove_RMB_SkinUnlockEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x42CC8F4))(0, value);
	}
	template <typename T = void> static T add_RMB_SkillUnlockEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x42CCA24))(0, value);
	}
	template <typename T = void> static T remove_RMB_SkillUnlockEvent(void* value) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x42CCB54))(0, value);
	}
	template <typename T = uintptr_t> static T RestoreComodityByKey(Il2CppString* key, bool record) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x42CCC84))(0, key, record);
	}
	template <typename T = uintptr_t> static T RestoreRoleByKey(Il2CppString* key, bool record) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x42CE000))(0, key, record);
	}
	template <typename T = void> static T ResotrePackage(int32_t packageIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x42CD314))(0, packageIndex);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T get_NewPackageDic() {
		return ((T (*)(void *))(Il2CppBase() + 0x42CEDF0))(0);
	}
	template <typename T = void> static T RestoreNewPackage(Il2CppString* packageKey) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42CDD04))(0, packageKey);
	}

};

}
