#pragma once
#include "Il2Cpp/Il2Cpp.h"

class MapManagerPattern
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MapManagerPattern"));
	}

	template <typename T = uintptr_t> T& roomRelation() {
		return *(T*)((uintptr_t)this + 0x228);
	}

	template <typename T = void> T Start() {
		return ((T (*)(MapManagerPattern*))(Il2CppBase() + 0x41E408C))(this);
	}
	template <typename T = void> T AdjustRoomRelation() {
		return ((T (*)(MapManagerPattern*))(Il2CppBase() + 0x41E4174))(this);
	}
	template <typename T = void> T CreateMap() {
		return ((T (*)(MapManagerPattern*))(Il2CppBase() + 0x41E4410))(this);
	}
	template <typename T = void> T SetupRoomDirection() {
		return ((T (*)(MapManagerPattern*))(Il2CppBase() + 0x41E446C))(this);
	}
	template <typename T = void> T iFixBaseProxy_CreateMap() {
		return ((T (*)(MapManagerPattern*))(Il2CppBase() + 0x41E4CC4))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(MapManagerPattern*))(Il2CppBase() + 0x41E4CCC))(this);
	}

};

}
