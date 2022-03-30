#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ObjectRepeatShifting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ObjectRepeatShifting"));
	}

	template <typename T = Il2CppVector3> T& direction() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& repeatDistance() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& oriPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& passedTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ObjectRepeatShifting*))(Il2CppBase() + 0x1DBCF88))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ObjectRepeatShifting*))(Il2CppBase() + 0x1DBD024))(this);
	}

};

}
