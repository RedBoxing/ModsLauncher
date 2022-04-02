#pragma once
#include "Il2Cpp/Il2Cpp.h"

class HighlightSelect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HighlightSelect"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector2> T& size() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& localPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Update() {
		return ((T (*)(HighlightSelect*))(Il2CppBase() + 0x1A38380))(this);
	}

};

}
