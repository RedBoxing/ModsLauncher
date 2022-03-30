#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ShareDataUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShareDataUtil"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& MYNAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& K_Game_Name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& directoryPickerFragment() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& SelectDataAction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& SaveDataAction() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> static T InitShareDataUtil() {
		return ((T (*)(void *))(Il2CppBase() + 0x182C310))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ShareDataUtil*))(Il2CppBase() + 0x182C410))(this);
	}
	template <typename T = void> T OnSelectData(Il2CppString* result) {
		return ((T (*)(ShareDataUtil*, Il2CppString*))(Il2CppBase() + 0x182C79C))(this, result);
	}
	template <typename T = void> T OnSaveData(Il2CppString* reslt) {
		return ((T (*)(ShareDataUtil*, Il2CppString*))(Il2CppBase() + 0x182C914))(this, reslt);
	}
	template <typename T = void> T SaveFileChooseFloder(Il2CppString* fileName, Il2CppString* data, void* onSaved) {
		return ((T (*)(ShareDataUtil*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x182CA8C))(this, fileName, data, onSaved);
	}
	template <typename T = void> T SelectFileShow(void* onRead) {
		return ((T (*)(ShareDataUtil*, void*))(Il2CppBase() + 0x182CC68))(this, onRead);
	}
	template <typename T = void> T SelectFileDelete() {
		return ((T (*)(ShareDataUtil*))(Il2CppBase() + 0x182CD98))(this);
	}
	template <typename T = void> T DefaultSave(Il2CppString* fileName, Il2CppString* data) {
		return ((T (*)(ShareDataUtil*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x182CEBC))(this, fileName, data);
	}

};

}
