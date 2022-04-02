#pragma once
#include "Il2Cpp/Il2Cpp.h"

class ArtifactsStartRoomNPC
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ArtifactsStartRoomNPC"));
	}

	template <typename T = float> T& introTalkDelay() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& talkingSequence() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& _talkState() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& _talkedWhenPickUpWeapon() {
		return *(T*)((uintptr_t)this + 0xA4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ArtifactsStartRoomNPC*))(Il2CppBase() + 0x417D804))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ArtifactsStartRoomNPC*))(Il2CppBase() + 0x417D93C))(this);
	}
	template <typename T = void> T GameStart(uintptr_t data) {
		return ((T (*)(ArtifactsStartRoomNPC*, uintptr_t))(Il2CppBase() + 0x417DA68))(this, data);
	}
	template <typename T = void> T OnPickWeapon(uintptr_t data) {
		return ((T (*)(ArtifactsStartRoomNPC*, uintptr_t))(Il2CppBase() + 0x417DB6C))(this, data);
	}
	template <typename T = void> T Talk1() {
		return ((T (*)(ArtifactsStartRoomNPC*))(Il2CppBase() + 0x417DF4C))(this);
	}
	template <typename T = void> T Talk2() {
		return ((T (*)(ArtifactsStartRoomNPC*))(Il2CppBase() + 0x417DD64))(this);
	}
	template <typename T = bool> T Triggerable(uintptr_t controller) {
		return ((T (*)(ArtifactsStartRoomNPC*, uintptr_t))(Il2CppBase() + 0x417E300))(this, controller);
	}
	template <typename T = void> T OnItemTriggerSuccess(uintptr_t controller) {
		return ((T (*)(ArtifactsStartRoomNPC*, uintptr_t))(Il2CppBase() + 0x417E37C))(this, controller);
	}
	template <typename T = void> T GameStartb__5_0() {
		return ((T (*)(ArtifactsStartRoomNPC*))(Il2CppBase() + 0x417E470))(this);
	}
	template <typename T = void> T Talk1b__8_0() {
		return ((T (*)(ArtifactsStartRoomNPC*))(Il2CppBase() + 0x417E474))(this);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(ArtifactsStartRoomNPC*))(Il2CppBase() + 0x417E47C))(this);
	}
	template <typename T = bool> T iFixBaseProxy_Triggerable(uintptr_t P0) {
		return ((T (*)(ArtifactsStartRoomNPC*, uintptr_t))(Il2CppBase() + 0x417E484))(this, P0);
	}
	template <typename T = void> T iFixBaseProxy_OnItemTriggerSuccess(uintptr_t P0) {
		return ((T (*)(ArtifactsStartRoomNPC*, uintptr_t))(Il2CppBase() + 0x417E48C))(this, P0);
	}

};

}
