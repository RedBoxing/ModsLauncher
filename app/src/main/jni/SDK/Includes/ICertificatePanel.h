#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ICertificatePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICertificatePanel"));
	}


	template <typename T = void> T Display(uintptr_t data, uintptr_t bg) {
		return ((T (*)(ICertificatePanel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, bg);
	}
	template <typename T = bool> T Match(uintptr_t data) {
		return ((T (*)(ICertificatePanel*, uintptr_t))(Il2CppBase() + 0x0))(this, data);
	}

};

}
