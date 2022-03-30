#pragma once
#include "Il2Cpp/Il2Cpp.h"

class Footprints
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Footprints"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& footprint() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& stride() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& width() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& minWidth() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& offset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& footPrintType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& lastPosition() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& init() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& isEnabled() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(Footprints*))(Il2CppBase() + 0x4512BCC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(Footprints*))(Il2CppBase() + 0x4512D84))(this);
	}
	template <typename T = void> T SetTarget(uintptr_t t) {
		return ((T (*)(Footprints*, uintptr_t))(Il2CppBase() + 0x4512C30))(this, t);
	}
	template <typename T = void> T Update() {
		return ((T (*)(Footprints*))(Il2CppBase() + 0x45135BC))(this);
	}
	template <typename T = void> T GenFootprint(Il2CppVector3 dir) {
		return ((T (*)(Footprints*, Il2CppVector3))(Il2CppBase() + 0x4512DE4))(this, dir);
	}

};

}
