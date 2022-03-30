#pragma once
#include "Il2Cpp/Il2Cpp.h"

class NecSpiderController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NecSpiderController"));
	}

	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = float> T& bornInitDealy() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& bornTime() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& bornYHeight() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = float> T& bornXOffset() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = void*> T& onDead() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& shadowLockSprite() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& boxCollider() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x43848E8))(this);
	}
	template <typename T = uintptr_t> T BornAnim() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384A80))(this);
	}
	template <typename T = void> T StartRun() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384B60))(this);
	}
	template <typename T = void> T Escape() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384C08))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384D80))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384E1C))(this);
	}
	template <typename T = void> T AtkProcess() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384ED8))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384F54))(this);
	}
	template <typename T = void> T iFixBaseProxy_Escape() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384F5C))(this);
	}
	template <typename T = void> T iFixBaseProxy_AtkProcess() {
		return ((T (*)(NecSpiderController*))(Il2CppBase() + 0x4384F64))(this);
	}

};

}
