#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Abo {

class FileUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Abo", "FileUtil"));
	}


	template <typename T = Il2CppString*> static T get_InternalPersistentPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x19FBE80))(0);
	}
	template <typename T = void> static T WriteFile(Il2CppString* path, Il2CppString* contents) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FC1B8))(0, path, contents);
	}
	template <typename T = Il2CppString*> static T ReadFile(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19FC344))(0, path);
	}
	template <typename T = bool> static T CopyStringFile(Il2CppString* sourcePath, Il2CppString* destPath) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x19FC470))(0, sourcePath, destPath);
	}
	template <typename T = void> static T WriteByte(Il2CppString* path, Il2CppArray<uintptr_t>* contents) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x19FC644))(0, path, contents);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReadByte(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19FC750))(0, path);
	}
	template <typename T = void> static T WriteObject(uintptr_t obj, Il2CppString* path) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x19FC820))(0, obj, path);
	}
	template <typename T = uintptr_t> static T ReadObject(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x0))(0, path);
	}
	template <typename T = bool> static T Exists(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x19FC2E0))(0, path);
	}

};

}
