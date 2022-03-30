#pragma once
#include "Il2Cpp/Il2Cpp.h"

class PositionProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PositionProvider"));
	}

	template <typename T = Il2CppList<Il2CppRect>*> T& rects() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PositionProvider*))(Il2CppBase() + 0x43A0BA4))(this);
	}
	template <typename T = Il2CppVector2> T GetPosition() {
		return ((T (*)(PositionProvider*))(Il2CppBase() + 0x43A0C00))(this);
	}
	template <typename T = void> T OnDrawGizmos() {
		return ((T (*)(PositionProvider*))(Il2CppBase() + 0x43A0ED0))(this);
	}

};

}
