#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class PersistentStorage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "PersistentStorage"));
	}

	template <typename T = uintptr_t> static T& mStorage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T SetSetting_String(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45D9768))(0, key, value);
	}
	template <typename T = Il2CppString*> static T GetSetting_String(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x45D9D70))(0, key, defaultValue);
	}
	template <typename T = void> static T DeleteSetting(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45EC784))(0, key);
	}
	template <typename T = bool> static T HasSetting(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x45EC870))(0, key);
	}
	template <typename T = void> static T ForceSaveSettings() {
		return ((T (*)(void *))(Il2CppBase() + 0x45EC95C))(0);
	}
	template <typename T = bool> static T CanAccessFiles() {
		return ((T (*)(void *))(Il2CppBase() + 0x45ECA30))(0);
	}
	template <typename T = bool> static T SaveFile(uintptr_t fileType, Il2CppString* fileName, Il2CppString* data, bool logExceptions) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x45ECB04))(0, fileType, fileName, data, logExceptions);
	}
	template <typename T = Il2CppString*> static T LoadFile(uintptr_t fileType, Il2CppString* fileName, bool logExceptions) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x45ECC20))(0, fileType, fileName, logExceptions);
	}
	template <typename T = bool> static T DeleteFile(uintptr_t fileType, Il2CppString* fileName, bool logExceptions) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x45ECD30))(0, fileType, fileName, logExceptions);
	}
	template <typename T = bool> static T HasFile(uintptr_t fileType, Il2CppString* fileName, bool logExceptions) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x45ECE40))(0, fileType, fileName, logExceptions);
	}

};

}
