#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass920
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass92_0"));
	}

	template <typename T = uintptr_t> T& roomInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& failedCb() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T BuildRoomRemoteb__0() {
		return ((T (*)(cDisplayClass920*))(Il2CppBase() + 0x436F844))(this);
	}

};

}
