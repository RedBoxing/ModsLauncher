#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass3410
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass341_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& window() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& controllerId() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T ShowControllerAssignmentConflictWindowb__0() {
		return ((T (*)(cDisplayClass3410*))(Il2CppBase() + 0x21DD9B4))(this);
	}
	template <typename T = void> T ShowControllerAssignmentConflictWindowb__1() {
		return ((T (*)(cDisplayClass3410*))(Il2CppBase() + 0x21DDA04))(this);
	}

};

}
