#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass730
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass73_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& onSuccess() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& onFail() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T DnloadSaveb__1(uintptr_t recvBuf) {
		return ((T (*)(cDisplayClass730*, uintptr_t))(Il2CppBase() + 0x42F3660))(this, recvBuf);
	}

};

}
