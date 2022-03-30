#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DFDoor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DFDoor"));
	}

	template <typename T = uintptr_t> T& spriteOpen() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& spriteClose() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& pillarRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> static T& animPillarInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& animPillarDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(DFDoor*))(Il2CppBase() + 0x4287460))(this);
	}
	template <typename T = void> T Open() {
		return ((T (*)(DFDoor*))(Il2CppBase() + 0x4287514))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(DFDoor*))(Il2CppBase() + 0x4287968))(this);
	}

};

}
