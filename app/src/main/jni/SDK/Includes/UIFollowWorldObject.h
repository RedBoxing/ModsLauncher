#pragma once
#include "Il2Cpp/Il2Cpp.h"

class UIFollowWorldObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIFollowWorldObject"));
	}

	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(UIFollowWorldObject*))(Il2CppBase() + 0x43320AC))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIFollowWorldObject*))(Il2CppBase() + 0x43322A4))(this);
	}

};

}
