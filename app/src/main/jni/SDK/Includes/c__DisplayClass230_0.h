#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass2300
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass230_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T DisplayUIObjb__0() {
		return ((T (*)(cDisplayClass2300*))(Il2CppBase() + 0x1C6FACC))(this);
	}

};

}
