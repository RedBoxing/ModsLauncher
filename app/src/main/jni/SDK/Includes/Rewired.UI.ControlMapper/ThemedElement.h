#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Rewired.UI.ControlMapper {

class ThemedElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Rewired.UI.ControlMapper", "ThemedElement"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _elements() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ThemedElement*))(Il2CppBase() + 0x1BDF674))(this);
	}

};

}
