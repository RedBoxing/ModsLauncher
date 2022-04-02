#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIWindowPauseTickets
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIWindowPauseTickets"));
	}

	template <typename T = uintptr_t> T& rebornCardConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rebornImage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& hopperTicketView() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& uiWindowPause() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = bool> T get_awake() {
		return ((T (*)(UIWindowPauseTickets*))(Il2CppBase() + 0x43162E8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWindowPauseTickets*))(Il2CppBase() + 0x4316358))(this);
	}
	template <typename T = void> T UpdateHooperTicket() {
		return ((T (*)(UIWindowPauseTickets*))(Il2CppBase() + 0x4316614))(this);
	}
	template <typename T = void> T UpdateRebornCard() {
		return ((T (*)(UIWindowPauseTickets*))(Il2CppBase() + 0x43163D8))(this);
	}

};

}
