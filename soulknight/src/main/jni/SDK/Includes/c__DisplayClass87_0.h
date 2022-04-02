#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass870
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass87_0"));
	}

	template <typename T = uintptr_t> T& battleData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnBtnJoinRoomClickb__0() {
		return ((T (*)(cDisplayClass870*))(Il2CppBase() + 0x44B6C0C))(this);
	}

};

}
