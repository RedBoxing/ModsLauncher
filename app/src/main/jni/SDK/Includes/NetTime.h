#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetTime"));
	}

	template <typename T = uintptr_t> static T& Time() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& networkTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& GetNetTimeCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void*> static T UpdateNetTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x445F110))(0);
	}
	template <typename T = void*> static T GetNetTimeFromHongkong(int32_t maxCostMillisecond) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x445F240))(0, maxCostMillisecond);
	}

};

}
