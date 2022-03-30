#pragma once
#include "Il2Cpp/Il2Cpp.h"

class fnOnSourceUpdated
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "fnOnSourceUpdated"));
	}


	template <typename T = void> T Invoke(uintptr_t source, bool ReceivedNewData, Il2CppString* errorMsg) {
		return ((T (*)(fnOnSourceUpdated*, uintptr_t, bool, Il2CppString*))(Il2CppBase() + 0x4222F68))(this, source, ReceivedNewData, errorMsg);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t source, bool ReceivedNewData, Il2CppString* errorMsg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(fnOnSourceUpdated*, uintptr_t, bool, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4223728))(this, source, ReceivedNewData, errorMsg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(fnOnSourceUpdated*, uintptr_t))(Il2CppBase() + 0x42237CC))(this, result);
	}

};

}
