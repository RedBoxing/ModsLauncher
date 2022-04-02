#pragma once
#include "Il2Cpp/Il2Cpp.h"

class RoomTrainerPet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoomTrainerPet"));
	}

	template <typename T = float> static T& DEFAULT_DURATION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& DEFAULT_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& current_state() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& tutorial_infos() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = bool> T& talk_end() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& talk_index() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& target_point() {
		return *(T*)((uintptr_t)this + 0x190);
	}

	template <typename T = void> T Start() {
		return ((T (*)(RoomTrainerPet*))(Il2CppBase() + 0x180351C))(this);
	}
	template <typename T = void> T TalkEnd(uintptr_t e) {
		return ((T (*)(RoomTrainerPet*, uintptr_t))(Il2CppBase() + 0x1804E1C))(this, e);
	}
	template <typename T = uintptr_t> T CreateTargetPoint(uintptr_t t) {
		return ((T (*)(RoomTrainerPet*, uintptr_t))(Il2CppBase() + 0x1804F38))(this, t);
	}
	template <typename T = void> T UpdateTutorialInfo() {
		return ((T (*)(RoomTrainerPet*))(Il2CppBase() + 0x180432C))(this);
	}
	template <typename T = void> T UpdateCurrentTutorial() {
		return ((T (*)(RoomTrainerPet*))(Il2CppBase() + 0x1804798))(this);
	}
	template <typename T = void> T Talk() {
		return ((T (*)(RoomTrainerPet*))(Il2CppBase() + 0x1804984))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(RoomTrainerPet*))(Il2CppBase() + 0x18051B0))(this);
	}
	template <typename T = bool> static T HasTeach() {
		return ((T (*)(void *))(Il2CppBase() + 0x18052A0))(0);
	}
	template <typename T = void> T iFixBaseProxy_Start() {
		return ((T (*)(RoomTrainerPet*))(Il2CppBase() + 0x1805590))(this);
	}
	template <typename T = void> T iFixBaseProxy_OnDestroy() {
		return ((T (*)(RoomTrainerPet*))(Il2CppBase() + 0x1805598))(this);
	}

};

}
