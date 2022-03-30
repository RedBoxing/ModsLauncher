#pragma once
#include "Il2Cpp/Il2Cpp.h"

class BuffBat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuffBat"));
	}

	template <typename T = uintptr_t> T& bullet_bat() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& source_object() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = void> T SetSourceObject(uintptr_t source_object) {
		return ((T (*)(BuffBat*, uintptr_t))(Il2CppBase() + 0x20A4914))(this, source_object);
	}
	template <typename T = uintptr_t> T GetSourceObject() {
		return ((T (*)(BuffBat*))(Il2CppBase() + 0x20A4988))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BuffBat*))(Il2CppBase() + 0x20A49E8))(this);
	}
	template <typename T = void> T SummonBat() {
		return ((T (*)(BuffBat*))(Il2CppBase() + 0x20A4AC0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(BuffBat*))(Il2CppBase() + 0x20A4CF0))(this);
	}

};

}
