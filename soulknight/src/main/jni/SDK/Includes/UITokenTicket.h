#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UITokenTicket
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UITokenTicket"));
	}

	template <typename T = uintptr_t> T& machine() {
		return *(T*)((uintptr_t)this + 0x98);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UITokenTicket*))(Il2CppBase() + 0x41D65B4))(this);
	}
	template <typename T = void> T OnClickConfirm() {
		return ((T (*)(UITokenTicket*))(Il2CppBase() + 0x41D661C))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(UITokenTicket*))(Il2CppBase() + 0x41D6960))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnClickConfirm() {
		return ((T (*)(UITokenTicket*))(Il2CppBase() + 0x41D6968))(this);
	}

};

}
