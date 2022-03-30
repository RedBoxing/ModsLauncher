#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerRace
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerRace"));
	}

	template <typename T = uintptr_t> T& grid() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MapManagerRace*))(Il2CppBase() + 0x41E4CD4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(MapManagerRace*))(Il2CppBase() + 0x41E4F00))(this);
	}

};

}
