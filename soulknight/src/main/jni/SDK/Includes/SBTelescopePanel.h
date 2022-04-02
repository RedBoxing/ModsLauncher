#pragma once
#include "Il2Cpp/Il2Cpp.h"

class SBTelescopePanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SBTelescopePanel"));
	}

	template <typename T = uintptr_t> T& slider() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(SBTelescopePanel*))(Il2CppBase() + 0x180D614))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SBTelescopePanel*))(Il2CppBase() + 0x180D670))(this);
	}

};

}
