#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ElementInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ElementInfo"));
	}

	template <typename T = Il2CppString*> T& _themeClass() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _component() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_themeClass() {
		return ((T (*)(ElementInfo*))(Il2CppBase() + 0x1BDF6E0))(this);
	}
	template <typename T = uintptr_t> T get_component() {
		return ((T (*)(ElementInfo*))(Il2CppBase() + 0x1BDF740))(this);
	}

};

}
