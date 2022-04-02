#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DictSerializeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DictSerializeUtil"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x42EC354))(0);
	}
	template <typename T = uintptr_t> T CreateInstacne(uintptr_t type) {
		return ((T (*)(DictSerializeUtil*, uintptr_t))(Il2CppBase() + 0x42EC47C))(this, type);
	}
	template <typename T = uintptr_t> T CreateKeyInstacne(uintptr_t type, uintptr_t dictionary) {
		return ((T (*)(DictSerializeUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42EC588))(this, type, dictionary);
	}
	template <typename T = uintptr_t> T GetData() {
		return ((T (*)(DictSerializeUtil*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetData_1(uintptr_t type, bool forceLoad) {
		return ((T (*)(DictSerializeUtil*, uintptr_t, bool))(Il2CppBase() + 0x42ECC04))(this, type, forceLoad);
	}
	template <typename T = void> T SetData(uintptr_t type, uintptr_t data) {
		return ((T (*)(DictSerializeUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42ED124))(this, type, data);
	}
	template <typename T = void> T Save(uintptr_t type, bool isPretty, Il2CppString* filePath) {
		return ((T (*)(DictSerializeUtil*, uintptr_t, bool, Il2CppString*))(Il2CppBase() + 0x42ED1E8))(this, type, isPretty, filePath);
	}
	template <typename T = void> T Load(uintptr_t type) {
		return ((T (*)(DictSerializeUtil*, uintptr_t))(Il2CppBase() + 0x42ECD48))(this, type);
	}
	template <typename T = Il2CppString*> T GetFilePath(uintptr_t type) {
		return ((T (*)(DictSerializeUtil*, uintptr_t))(Il2CppBase() + 0x42ED578))(this, type);
	}

};

}
