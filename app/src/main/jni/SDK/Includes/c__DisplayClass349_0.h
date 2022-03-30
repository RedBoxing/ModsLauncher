#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass3490
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass349_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& window() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& assignment() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& skipOtherPlayers() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T ShowElementAssignmentConflictWindowb__0() {
		return ((T (*)(cDisplayClass3490*))(Il2CppBase() + 0x21DDBB0))(this);
	}
	template <typename T = void> T ShowElementAssignmentConflictWindowb__1() {
		return ((T (*)(cDisplayClass3490*))(Il2CppBase() + 0x21DDC00))(this);
	}
	template <typename T = void> T ShowElementAssignmentConflictWindowb__2() {
		return ((T (*)(cDisplayClass3490*))(Il2CppBase() + 0x21DDCBC))(this);
	}
	template <typename T = void> T ShowElementAssignmentConflictWindowb__3() {
		return ((T (*)(cDisplayClass3490*))(Il2CppBase() + 0x21DDD68))(this);
	}

};

}
