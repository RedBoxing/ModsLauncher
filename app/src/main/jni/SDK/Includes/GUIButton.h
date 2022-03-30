#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GUIButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GUIButton"));
	}


	template <typename T = uintptr_t> T get_button() {
		return ((T (*)(GUIButton*))(Il2CppBase() + 0x21DF234))(this);
	}
	template <typename T = uintptr_t> T get_buttonInfo() {
		return ((T (*)(GUIButton*))(Il2CppBase() + 0x21DF2F8))(this);
	}
	template <typename T = void> T SetButtonInfoData(Il2CppString* identifier, int32_t intData) {
		return ((T (*)(GUIButton*, Il2CppString*, int32_t))(Il2CppBase() + 0x21DF774))(this, identifier, intData);
	}
	template <typename T = void> T SetOnClickCallback(void* callback) {
		return ((T (*)(GUIButton*, void*))(Il2CppBase() + 0x21DF8F4))(this, callback);
	}

};

}
