#pragma once
#include "Il2Cpp/Il2Cpp.h"

class cDisplayClass3420
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<>c__DisplayClass342_0"));
	}

	template <typename T = uintptr_t> T& 4__this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& window() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& fieldInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& map() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& aem() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& actionName() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T ShowBeginElementAssignmentReplacementWindowb__0() {
		return ((T (*)(cDisplayClass3420*))(Il2CppBase() + 0x21DDA94))(this);
	}
	template <typename T = void> T ShowBeginElementAssignmentReplacementWindowb__1() {
		return ((T (*)(cDisplayClass3420*))(Il2CppBase() + 0x21DDAE4))(this);
	}
	template <typename T = void> T ShowBeginElementAssignmentReplacementWindowb__2() {
		return ((T (*)(cDisplayClass3420*))(Il2CppBase() + 0x21DDB3C))(this);
	}

};

}
