#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass91
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass9_1"));
	}

	template <typename T = uintptr_t> T& obj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& 9__3() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T _Castb__2() {
		return ((T (*)(cDisplayClass91*))(Il2CppBase() + 0x448F174))(this);
	}
	template <typename T = void> T _Castb__3() {
		return ((T (*)(cDisplayClass91*))(Il2CppBase() + 0x448F29C))(this);
	}

};

}
