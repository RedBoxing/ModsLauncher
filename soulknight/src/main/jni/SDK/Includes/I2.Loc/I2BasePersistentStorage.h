#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class I2BasePersistentStorage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "I2BasePersistentStorage"));
	}


	template <typename T = void> T SetSetting_String(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(I2BasePersistentStorage*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x421F0FC))(this, key, value);
	}
	template <typename T = Il2CppString*> T GetSetting_String(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(I2BasePersistentStorage*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x421F424))(this, key, defaultValue);
	}
	template <typename T = void> T DeleteSetting(Il2CppString* key) {
		return ((T (*)(I2BasePersistentStorage*, Il2CppString*))(Il2CppBase() + 0x421F6D4))(this, key);
	}
	template <typename T = void> T ForceSaveSettings() {
		return ((T (*)(I2BasePersistentStorage*))(Il2CppBase() + 0x421F944))(this);
	}
	template <typename T = bool> T HasSetting(Il2CppString* key) {
		return ((T (*)(I2BasePersistentStorage*, Il2CppString*))(Il2CppBase() + 0x421F9A4))(this, key);
	}
	template <typename T = bool> T CanAccessFiles() {
		return ((T (*)(I2BasePersistentStorage*))(Il2CppBase() + 0x421FA1C))(this);
	}
	template <typename T = Il2CppString*> T UpdateFilename(uintptr_t fileType, Il2CppString* fileName) {
		return ((T (*)(I2BasePersistentStorage*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x421FA7C))(this, fileType, fileName);
	}
	template <typename T = bool> T SaveFile(uintptr_t fileType, Il2CppString* fileName, Il2CppString* data, bool logExceptions) {
		return ((T (*)(I2BasePersistentStorage*, uintptr_t, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x421FB78))(this, fileType, fileName, data, logExceptions);
	}
	template <typename T = Il2CppString*> T LoadFile(uintptr_t fileType, Il2CppString* fileName, bool logExceptions) {
		return ((T (*)(I2BasePersistentStorage*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x421FE94))(this, fileType, fileName, logExceptions);
	}
	template <typename T = bool> T DeleteFile(uintptr_t fileType, Il2CppString* fileName, bool logExceptions) {
		return ((T (*)(I2BasePersistentStorage*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x42201A0))(this, fileType, fileName, logExceptions);
	}
	template <typename T = bool> T HasFile(uintptr_t fileType, Il2CppString* fileName, bool logExceptions) {
		return ((T (*)(I2BasePersistentStorage*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x42204A0))(this, fileType, fileName, logExceptions);
	}

};

}
