#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ReleaseQueue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReleaseQueue"));
	}

	template <typename T = float> T& lastReleaseTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& queue() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T CanRefreshTime() {
		return ((T (*)(ReleaseQueue*))(Il2CppBase() + 0x19C0FC4))(this);
	}
	template <typename T = bool> T HasRelease() {
		return ((T (*)(ReleaseQueue*))(Il2CppBase() + 0x19C0E20))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(ReleaseQueue*))(Il2CppBase() + 0x19C0EC4))(this);
	}

};

}
