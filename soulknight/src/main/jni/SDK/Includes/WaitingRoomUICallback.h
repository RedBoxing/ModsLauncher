#pragma once
#include "Il2Cpp/Il2Cpp.h"

class WaitingRoomUICallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WaitingRoomUICallback"));
	}


	template <typename T = void> T Invoke(uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(WaitingRoomUICallback*, uintptr_t, uintptr_t))(Il2CppBase() + 0x357CE2C))(this, arg0, arg1);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg0, uintptr_t arg1, uintptr_t callback, uintptr_t object) {
		return ((T (*)(WaitingRoomUICallback*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x357D294))(this, arg0, arg1, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(WaitingRoomUICallback*, uintptr_t))(Il2CppBase() + 0x357D334))(this, result);
	}

};

}
