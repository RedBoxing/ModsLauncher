#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NetLogic
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetLogic"));
	}

	template <typename T = uintptr_t> T& _relay() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& rpc() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uintptr_t> static T get_Inst() {
		return ((T (*)(void *))(Il2CppBase() + 0x44430A8))(0);
	}
	template <typename T = void> T Start() {
		return ((T (*)(NetLogic*))(Il2CppBase() + 0x444312C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NetLogic*))(Il2CppBase() + 0x4443210))(this);
	}
	template <typename T = void> T Startb__4_0(int32_t err, Il2CppString* str) {
		return ((T (*)(NetLogic*, int32_t, Il2CppString*))(Il2CppBase() + 0x44432EC))(this, err, str);
	}

};

}
