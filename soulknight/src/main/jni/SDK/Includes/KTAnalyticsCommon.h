#pragma once
#include "Il2Cpp/Il2Cpp.h"

class KTAnalyticsCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KTAnalyticsCommon"));
	}


	template <typename T = void> static T SetUserProperty(Il2CppString* name, uintptr_t value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21AD50C))(0, name, value);
	}
	template <typename T = void> static T LogEvent(Il2CppString* name, uintptr_t properties) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x21AD5FC))(0, name, properties);
	}

};

}
