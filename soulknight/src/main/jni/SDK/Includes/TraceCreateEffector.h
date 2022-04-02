#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TraceCreateEffector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraceCreateEffector"));
	}

	template <typename T = uintptr_t> T& bulletObject() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& continuousCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& multiCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& multiCountDelta() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& subAngle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& intervalDistance() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& ignoreCenter() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& animSpeed() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& buffEffected() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(TraceCreateEffector*))(Il2CppBase() + 0x1E47EEC))(this);
	}
	template <typename T = void> T OnTaken() {
		return ((T (*)(TraceCreateEffector*))(Il2CppBase() + 0x1E47FC0))(this);
	}
	template <typename T = uintptr_t> T CreatingTrace() {
		return ((T (*)(TraceCreateEffector*))(Il2CppBase() + 0x1E48030))(this);
	}

};

}
