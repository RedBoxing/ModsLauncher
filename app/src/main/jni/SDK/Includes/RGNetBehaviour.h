#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RGNetBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGNetBehaviour"));
	}

	template <typename T = void*> T& readyClientSet() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isSendReady() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& netTransformId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ranSeed() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& netInterface() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& ignoreReady() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& notReadyHide() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RGNetBehaviour*))(Il2CppBase() + 0x1B77698))(this);
	}
	template <typename T = void> T SetUpRGRandom() {
		return ((T (*)(RGNetBehaviour*))(Il2CppBase() + 0x1B7789C))(this);
	}
	template <typename T = void> T SetRGRandomSeed(int32_t seed) {
		return ((T (*)(RGNetBehaviour*, int32_t))(Il2CppBase() + 0x1B77BEC))(this, seed);
	}
	template <typename T = void> T ClientReady() {
		return ((T (*)(RGNetBehaviour*))(Il2CppBase() + 0x1B77D2C))(this);
	}
	template <typename T = bool> T AllClientReady() {
		return ((T (*)(RGNetBehaviour*))(Il2CppBase() + 0x1B78080))(this);
	}
	template <typename T = void> T OnClientReady(uint32_t clientNetId) {
		return ((T (*)(RGNetBehaviour*, uint32_t))(Il2CppBase() + 0x1B782F0))(this, clientNetId);
	}
	template <typename T = void> T SyncAllClientReady() {
		return ((T (*)(RGNetBehaviour*))(Il2CppBase() + 0x1B783F8))(this);
	}
	template <typename T = void> T OnAllClientReady() {
		return ((T (*)(RGNetBehaviour*))(Il2CppBase() + 0x1B77ED4))(this);
	}
	template <typename T = void> T DelayCheckReadyState() {
		return ((T (*)(RGNetBehaviour*))(Il2CppBase() + 0x1B78524))(this);
	}

};

}
