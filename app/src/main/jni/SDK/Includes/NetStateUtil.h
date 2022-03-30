#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetStateUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetStateUtil"));
	}

	template <typename T = Il2CppString*> static T& MYNAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& networkUtilFragment() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& NetStateChangeEvent() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T add_NetStateChangeEvent(void* value) {
		return ((T (*)(NetStateUtil*, void*))(Il2CppBase() + 0x445B8CC))(this, value);
	}
	template <typename T = void> T remove_NetStateChangeEvent(void* value) {
		return ((T (*)(NetStateUtil*, void*))(Il2CppBase() + 0x445B9B8))(this, value);
	}
	template <typename T = void> static T InitShareDataUtil() {
		return ((T (*)(void *))(Il2CppBase() + 0x445BAA4))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(NetStateUtil*))(Il2CppBase() + 0x445BB84))(this);
	}
	template <typename T = void> T OnNetStateChange(Il2CppString* result) {
		return ((T (*)(NetStateUtil*, Il2CppString*))(Il2CppBase() + 0x445BE24))(this, result);
	}
	template <typename T = void*> static T HasNet() {
		return ((T (*)(void *))(Il2CppBase() + 0x445BFA0))(0);
	}

};

}
