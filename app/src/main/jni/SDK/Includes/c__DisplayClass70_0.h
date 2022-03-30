#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass700
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass70_0"));
	}

	template <typename T = uintptr_t> T& battleData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& buildRoomInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T OnBtnBulidClickb__0() {
		return ((T (*)(cDisplayClass700*))(Il2CppBase() + 0x44B6B44))(this);
	}

};

}
