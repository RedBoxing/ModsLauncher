#pragma once
#include "Il2Cpp/Il2Cpp.h"

class IConsumeRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IConsumeRecord"));
	}


	template <typename T = bool> T get_NeedRecord() {
		return ((T (*)(IConsumeRecord*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_NeedRecord(bool value) {
		return ((T (*)(IConsumeRecord*, bool))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T AddRecord() {
		return ((T (*)(IConsumeRecord*))(Il2CppBase() + 0x0))(this);
	}

};

}
