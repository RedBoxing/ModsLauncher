#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass3500
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass350_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& window() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T ShowMouseAssignmentConflictWindowb__0() {
		return ((T (*)(cDisplayClass3500*))(Il2CppBase() + 0x21DDE2C))(this);
	}
	template <typename T = void> T ShowMouseAssignmentConflictWindowb__1() {
		return ((T (*)(cDisplayClass3500*))(Il2CppBase() + 0x21DDE7C))(this);
	}

};

}
