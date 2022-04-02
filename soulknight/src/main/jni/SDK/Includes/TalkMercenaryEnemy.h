#pragma once
#include "Il2Cpp/Il2Cpp.h"

class TalkMercenaryEnemy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TalkMercenaryEnemy"));
	}

	template <typename T = Il2CppString*> T& talk_request() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& talk_success() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& audio_clip() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(TalkMercenaryEnemy*, uintptr_t))(Il2CppBase() + 0x43AEB74))(this, controller);
	}
	template <typename T = void> T TurnEnemy() {
		return ((T (*)(TalkMercenaryEnemy*))(Il2CppBase() + 0x43AED9C))(this);
	}
	template <typename T = void> T OnItemTriggerFail(uintptr_t controller) {
		return ((T (*)(TalkMercenaryEnemy*, uintptr_t))(Il2CppBase() + 0x43AF060))(this, controller);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(TalkMercenaryEnemy*, uintptr_t))(Il2CppBase() + 0x43AF358))(this, controller);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(TalkMercenaryEnemy*, uintptr_t))(Il2CppBase() + 0x43AF43C))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerFail(uintptr_t P0) {
		return ((T (*)(TalkMercenaryEnemy*, uintptr_t))(Il2CppBase() + 0x43AF444))(this, P0);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(TalkMercenaryEnemy*, uintptr_t))(Il2CppBase() + 0x43AF44C))(this, P0);
	}

};

}
