#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ElementAssignmentChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElementAssignmentChange"));
	}

	template <typename T = uintptr_t> T& changeType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& context() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uintptr_t> T get_changeType() {
		return ((T (*)(ElementAssignmentChange*))(Il2CppBase() + 0x205FFC8))(this);
	}
	template <typename T = void> T set_changeType(uintptr_t value) {
		return ((T (*)(ElementAssignmentChange*, uintptr_t))(Il2CppBase() + 0x2060CC8))(this, value);
	}
	template <typename T = uintptr_t> T get_context() {
		return ((T (*)(ElementAssignmentChange*))(Il2CppBase() + 0x205D5C0))(this);
	}
	template <typename T = void> T set_context(uintptr_t value) {
		return ((T (*)(ElementAssignmentChange*, uintptr_t))(Il2CppBase() + 0x2062B68))(this, value);
	}

};

}
