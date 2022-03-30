#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace FlyingWormConsole3 {

class ConsoleProRemoteServer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FlyingWormConsole3", "ConsoleProRemoteServer"));
	}

	template <typename T = bool> T& useNATPunch() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& port() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ConsoleProRemoteServer*))(Il2CppBase() + 0x4511298))(this);
	}

};

}
