#pragma once
#include "Il2Cpp/Il2Cpp.h"

class DrivePos
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DrivePos"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& positions() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppDictionary<int32_t, Il2CppVector3>*>*> T& skinPositions() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T ResetPosition(uintptr_t hero, int32_t skinIndex, Il2CppVector3 scale) {
		return ((T (*)(DrivePos*, uintptr_t, int32_t, Il2CppVector3))(Il2CppBase() + 0x42EF324))(this, hero, skinIndex, scale);
	}
	template <typename T = void> T RecorePosition() {
		return ((T (*)(DrivePos*))(Il2CppBase() + 0x42EF5C4))(this);
	}

};

}
