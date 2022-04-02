#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITempMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITempMessage"));
	}


	template <typename T = void> T SetMessage(Il2CppString* msg, float dutation, bool needLocalize) {
		return ((T (*)(UITempMessage*, Il2CppString*, float, bool))(Il2CppBase() + 0x41C9894))(this, msg, dutation, needLocalize);
	}
	template <typename T = uintptr_t> T EndingMessage(float time) {
		return ((T (*)(UITempMessage*, float))(Il2CppBase() + 0x41C9A60))(this, time);
	}
	template <typename T = void> T EndMessage() {
		return ((T (*)(UITempMessage*))(Il2CppBase() + 0x41C9B6C))(this);
	}

};

}
