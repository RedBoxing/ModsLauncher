#pragma once
#include "Il2Cpp/Il2Cpp.h"
namespace Com.LuisPedroFonseca.ProCamera2D {

class IntPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Com.LuisPedroFonseca.ProCamera2D", "IntPoint"));
	}

	template <typename T = uintptr_t> static T& MaxValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& X() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Y() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = bool> T IsEqual(uintptr_t other) {
		return ((T (*)(IntPoint*, uintptr_t))(Il2CppBase() + 0x1503BAC))(this, other);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(IntPoint*))(Il2CppBase() + 0x1503BB4))(this);
	}
	template <typename T = Il2CppString*> T iFixBaseProxy_ToString() {
		return ((T (*)(IntPoint*))(Il2CppBase() + 0x1503BBC))(this);
	}

};

}
