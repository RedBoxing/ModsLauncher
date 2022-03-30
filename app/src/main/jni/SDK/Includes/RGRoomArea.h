#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGRoomArea
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGRoomArea"));
	}

	template <typename T = uintptr_t> T& wallDirection() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& room() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& areaCollider() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RGRoomArea*))(Il2CppBase() + 0x1C71228))(this);
	}

};

}
