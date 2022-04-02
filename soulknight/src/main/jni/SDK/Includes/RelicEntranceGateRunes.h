#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RelicEntranceGateRunes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RelicEntranceGateRunes"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& runes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& timeDuration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& runeShowDelay() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& light2AlphaIdle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& light2AlphaIdleMin() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& light1AlphaIdleMin() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& idleDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _runes() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _sequences() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _tweens() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(RelicEntranceGateRunes*))(Il2CppBase() + 0x42B6B88))(this);
	}
	template <typename T = void> T OnGateTriggerSuccess() {
		return ((T (*)(RelicEntranceGateRunes*))(Il2CppBase() + 0x42B6F74))(this);
	}
	template <typename T = void> T OnGameComplete() {
		return ((T (*)(RelicEntranceGateRunes*))(Il2CppBase() + 0x42B7464))(this);
	}

};

}
