#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ISBSettable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISBSettable"));
	}


	template <typename T = void> T ShowSettingWindow() {
		return ((T (*)(ISBSettable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetDatas() {
		return ((T (*)(ISBSettable*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetDatas(Il2CppArray<uintptr_t>* datas) {
		return ((T (*)(ISBSettable*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, datas);
	}

};

}
