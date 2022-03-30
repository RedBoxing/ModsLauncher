#pragma once
#include "Il2Cpp/Il2Cpp.h"

class GhostHandController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GhostHandController"));
	}

	template <typename T = Il2CppVector3> T& deadParticlePosition() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& deadParticles() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = float> T& lifeTime() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& boxCollider() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& shadowLockSprite() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x4439DC0))(this);
	}
	template <typename T = void> T StartRun() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x4439C70))(this);
	}
	template <typename T = void> T Escape() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x4439F5C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x443A294))(this);
	}
	template <typename T = void> T DestroySelf() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x443A414))(this);
	}
	template <typename T = void> T AtkProcess() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x443A4D0))(this);
	}
	template <typename T = void> T OnAtk() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x443A594))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x443A8B0))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x443AA00))(this);
	}
	template <typename T = void> T iFixBaseProxy_Escape() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x443AA08))(this);
	}
	template <typename T = void> T iFixBaseProxy_AtkProcess() {
		return ((T (*)(GhostHandController*))(Il2CppBase() + 0x443AA10))(this);
	}

};

}
