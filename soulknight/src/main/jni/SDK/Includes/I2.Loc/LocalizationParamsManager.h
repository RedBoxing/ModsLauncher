#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizationParamsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizationParamsManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _Params() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _IsGlobalManager() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = Il2CppString*> T GetParameterValue(Il2CppString* ParamName) {
		return ((T (*)(LocalizationParamsManager*, Il2CppString*))(Il2CppBase() + 0x45E1A98))(this, ParamName);
	}
	template <typename T = void> T SetParameterValue(Il2CppString* ParamName, Il2CppString* ParamValue, bool localize) {
		return ((T (*)(LocalizationParamsManager*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x45E1BD0))(this, ParamName, ParamValue, localize);
	}
	template <typename T = void> T OnLocalize() {
		return ((T (*)(LocalizationParamsManager*))(Il2CppBase() + 0x45E1DA8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LocalizationParamsManager*))(Il2CppBase() + 0x45E1E98))(this);
	}
	template <typename T = void> T DoAutoRegister() {
		return ((T (*)(LocalizationParamsManager*))(Il2CppBase() + 0x45E1F0C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LocalizationParamsManager*))(Il2CppBase() + 0x45E2048))(this);
	}

};

}
