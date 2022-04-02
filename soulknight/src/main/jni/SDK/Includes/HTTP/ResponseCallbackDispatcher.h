#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace HTTP {

class ResponseCallbackDispatcher
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTTP", "ResponseCallbackDispatcher"));
	}

	template <typename T = uintptr_t> static T& singleton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& singletonGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& singletonLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> T& requests() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> static T get_Singleton() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A2BEA8))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x1A2BF4C))(0);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ResponseCallbackDispatcher*))(Il2CppBase() + 0x1A2FCC0))(this);
	}

};

}
