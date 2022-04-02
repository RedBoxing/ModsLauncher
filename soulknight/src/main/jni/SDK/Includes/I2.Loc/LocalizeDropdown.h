#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace I2.Loc {

class LocalizeDropdown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "I2.Loc", "LocalizeDropdown"));
	}

	template <typename T = Il2CppList<Il2CppString*>*> T& _Terms() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LocalizeDropdown*))(Il2CppBase() + 0x45E4E4C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LocalizeDropdown*))(Il2CppBase() + 0x45E5064))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LocalizeDropdown*))(Il2CppBase() + 0x45E5134))(this);
	}
	template <typename T = void> T OnLocalize() {
		return ((T (*)(LocalizeDropdown*))(Il2CppBase() + 0x45E4F24))(this);
	}
	template <typename T = void> T FillValues() {
		return ((T (*)(LocalizeDropdown*))(Il2CppBase() + 0x45E51E8))(this);
	}
	template <typename T = void> T UpdateLocalization() {
		return ((T (*)(LocalizeDropdown*))(Il2CppBase() + 0x45E5400))(this);
	}
	template <typename T = void> T UpdateLocalizationTMPro() {
		return ((T (*)(LocalizeDropdown*))(Il2CppBase() + 0x45E58C8))(this);
	}
	template <typename T = void> T FillValuesTMPro() {
		return ((T (*)(LocalizeDropdown*))(Il2CppBase() + 0x45E56C8))(this);
	}

};

}
