#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace RGScript.Util {

class DialogRunner
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RGScript.Util", "DialogRunner"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& clearDataFileNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& initPlayerPrefsData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& uriMarket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& uriPkg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> static T get_DialogCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x4550DD8))(0);
	}
	template <typename T = void> static T set_DialogCache(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4550ED8))(0, value);
	}
	template <typename T = uintptr_t> static T TryShowDialogs(Il2CppArray<uintptr_t>* datas) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4550FB8))(0, datas);
	}
	template <typename T = void> static T Show(uintptr_t data, int32_t delay) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x45510E4))(0, data, delay);
	}
	template <typename T = void> static T ShowDialog(uintptr_t data, int32_t targetShowTime) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x455164C))(0, data, targetShowTime);
	}
	template <typename T = void> static T RunCmd(uintptr_t alertDialog, Il2CppString* cmd, Il2CppString* extraAction) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4551FE8))(0, alertDialog, cmd, extraAction);
	}
	template <typename T = void> static T SetDialopShowTime(uintptr_t data, int32_t showTime) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4551D20))(0, data, showTime);
	}
	template <typename T = int32_t> static T GetDialopShowTime(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4551378))(0, data);
	}

};

}
